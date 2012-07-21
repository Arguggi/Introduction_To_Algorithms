//Author: Ruggero D'Alò
//Chapter 7 algorithms

#include "quicksort.h"

int partition(int *array, int l,int h){
  int i=l-1,j=l,temp=0;

  for (j=l;j<h;j++){
    if (array[j] <= array[h]){
      i++;
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
    }
  }
  i++;
  temp = array[i];
  array[i] = array[h];
  array[h] = temp;

return i;
}

void quicksort_algo(int *array,int l,int h){
  int m=0;
  if(l<h){
    m = partition(array,l,h);
    quicksort_algo(array,l,m-1);
    quicksort_algo(array,m+1,h);
  }
return;
}

void quicksort(int *array,int size){

  quicksort_algo(array,0,size-1);
  return;
}

int randomized_partition(int *array,int l,int h){
  int i=0,temp=0;
  srand(time(NULL));
  i = rand() % (h+1);
  temp =  array[i];
  array[i] = array[h];
  array[h] = temp;
  return partition(array,l,h);
}

void randomized_quicksort_algo(int *array,int l,int h){
  int m=0;
  if(l<h){
    m = randomized_partition(array,l,h);
    randomized_quicksort_algo(array,l,m-1);
    randomized_quicksort_algo(array,m+1,h);
  }
return;
}

void randomized_quicksort(int *array,int size){

  randomized_quicksort_algo(array,0,size-1);
  return;
}



