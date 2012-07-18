//Author: Ruggero D'Alò
//Chapter 5 algorithms

#include "random.h"

void randomized_hire_assistant(int *array, int size){

  int i=0, j=0,key=0,temp=0,random[size];

  for(i=0;i<size;i++){
    random[i] = rand() % (size*size*size);
    printf(".%d.", random[i]);
  }
  for (j=1;j<size;j++){ // Orders the random array and changes the original one accordingly
    key = random[j];
    i = j-1;
    while (i>=0 && random[i]>random[i+1]){
      random[i+1] = random[i];
      random[i] = key;
      temp = array[i];
      array[i] = array[i+1];
      array[i+1] = temp;
      i--;
    }
  }
return;
}

