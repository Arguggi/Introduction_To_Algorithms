//Author: Ruggero D'Alò
//Chapter 8 algorithms test
#include <stdio.h>
#include "linear.h"
#define SIZE 20

int main(void){

  int array[SIZE] = {13,19,9,5,12,8,7,10,21,2,0,11,26,59,18,62,54,32,59,12},B[SIZE],max=0;
  unsigned int i=0;

  if(!(max = findMaxForCountingSort(array,SIZE))){
    printf("Counting sort is incompatible with this array");
    return -1;
  }

  puts("Before sorting");
  for(i=0;i<SIZE;i++){
    printf("%d ", array[i]);
    B[i]=0;
  }
  countingSort(array,B,SIZE,max);

  puts("\n\n\nAfter sorting");
  for(i=0;i<SIZE;i++){
    printf("%d ", B[i]);
  }

  getchar();
return 0;
}
