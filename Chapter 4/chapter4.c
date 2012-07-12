#include "chapter4.h"

max * max_crossing_sub(int *array, int l,int h){
   int maxsumlf=0,maxsumrt=0,i=0,sum=0;
   max * max_array=malloc(sizeof(max));

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

max * find_maximum_subarray(int *array,int l, int h){
   int i=0;
   max * crossing=NULL;
   max * array_left=NULL;
   max * array_right=NULL;

   if (h==l){
      crossing = malloc(sizeof(max));
      crossing->maxlf = l;
      crossing->maxrt = h;
      crossing->maxsum = array[l];
      return crossing;
      }
   else {
      array_left = find_maximum_subarray(array,l,(l+h)/2);
      array_right = find_maximum_subarray(array,((l+h)/2)+1,h);
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
