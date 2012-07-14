//Author: Ruggero D'Alò
//Chapter 4 Max Subarray implementations

#include "maxarray.h"

//Max subarray - Divide et Impera O(nlog(n))
Max * max_crossing_sub(int *array,int l,int h){
  int maxsumlf=0,maxsumrt=0,i=0,sum=0;
  Max * max_array=malloc(sizeof(Max));

  for (i=(l+h)/2;i>=l;i--){
    sum = sum + array[i];
    if (sum > maxsumlf){
      maxsumlf = sum;
      max_array->maxlf = i;
    }
  }
  sum=0;
  for (i=((l+h)/2)+1;i<h;i++){
    sum = sum + array[i];
    if (sum > maxsumrt){
      maxsumrt = sum;
      max_array->maxrt = i;
    }
}
  max_array->maxsum = maxsumlf +maxsumrt;
return max_array;
}

Max * max_subarray(int *array,int l,int h){
  int i=0;
  Max * crossing=NULL;
  Max * array_left=NULL;
  Max * array_right=NULL;

  if (h==l){
    crossing = malloc(sizeof(Max));
    crossing->maxlf = l;
    crossing->maxrt = h;
    crossing->maxsum = array[l];
    return crossing;
  }
  else {
    array_left = max_subarray(array,l,(l+h)/2);
    array_right = max_subarray(array,((l+h)/2)+1,h);
    crossing = max_crossing_sub(array,l,h);

    if ((array_left->maxsum > array_right->maxsum) && (array_left->maxsum > crossing->maxsum)){
      free(array_right);
      free(crossing);
      return array_left;
    }
    else if ((array_right->maxsum > array_left->maxsum) && (array_right->maxsum > crossing->maxsum)){
      free(array_left);
      free(crossing);
      return array_right;
    }
    else {
      free(array_right);
      free(array_left);
      return crossing;
    }
  }
}
//End Divide et Impera

//Max subarray - Exercise 4.1-2 Quadratic O(n^2)
void max_subarray_quadratic(int *array,int size,Max *result){
  int i=0,j=0,sum=0;
  result->maxsum = 0;
  for (i=0;i<size;i++){
    for (j=i;j<size;j++){
      sum = sum + array[j];
      if (sum>result->maxsum){
        result->maxlf = i;
        result->maxrt = j;
        result->maxsum = sum;
      }
    }
    sum = 0;
  }
return;
}

//Max subarray - Exercise 4.1-5 Linear O(n)
void max_subarray_linear(int *array,int size,Max *result){
  int i=0,j=0,sum=0;

  for (i=0;i<size;i++){
    sum = sum +array[i];
    if (sum>result->maxsum){
      result->maxlf = j;
      result->maxrt = i;
      result->maxsum = sum;
    }
    if (sum < 0){
      sum =0;
      j = i+1;
    }
  }
return;
}
