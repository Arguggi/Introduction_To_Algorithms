//Author: Ruggero D'Alò
//Chapter 9 algorithms

#include "medians.h"
#include "..\Chapter 7\quicksort.h"

int select_algo(int* array,int l,int h,int i){

  int m=0;

  if(l==h){
    return array[l];
  }
  m = partition(array,l,h);

  if(i==m){
    return array[m];
  }
  else if(i<m){
    return select_algo(array,l,m-1,i);
  }
  else if(i>m){
    return select_algo(array,m+1,h,i);
  }
return -1; //Needed for GCC warnings
}
int select(int* array,int size,int rank){
  return select_algo(array,0,size-1,rank-1);
}

int randomized_select_algo(int* array,int l,int h,int i){
  int m=0;

  if(l==h){
    return array[l];
  }
  m = randomized_partition(array,l,h);

  if(i==m){
    return array[m];
  }
  else if(i<m){
    return randomized_select_algo(array,l,m-1,i);
  }
  else if(i>m){
    return randomized_select_algo(array,m+1,h,i);
  }
return -1; //Needed for GCC warnings
}

int randomized_select(int* array,int size,int rank){
  return randomized_select_algo(array,0,size-1,rank-1);
}




