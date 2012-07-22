//Author: Ruggero D'Alò
//Chapter 8 algorithms

#include "linear.h"

int findMaxForCountingSort(int* array,int size){

  int max=0,i=0;

  for(i=0;i<size;i++){
    if(array[i] > max){
      max = array[i];
    }
    if(array[i]<0)//Negative integers are not allowed
      return 0;
  }
return max;
}

void countingSort(int* array,int* sorted,int size,int max){

  int maxArray[max+1],i=0; //maxArray has to contain max elements plus the number 0;

  for(i=0;i<max+1;i++){
    maxArray[i] = 0;
  }

  for(i=0;i<size;i++){ // Counts numbers
    maxArray[array[i]]++;
  }

  for(i=1;i<max+1;i++){
    maxArray[i] = maxArray[i]+maxArray[i-1];
  }

  for(i=size-1;i>=0;i--){
    sorted[maxArray[array[i]]-1] = array[i]; //if maxArray[array[i]]=1 it's the first element,so it goed in sorted[0]
    maxArray[array[i]]--;
  }
return;
}



