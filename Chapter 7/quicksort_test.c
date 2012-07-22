//Author: Ruggero D'Alò
//Chapter 7 algorithms test
#include <stdio.h>
#include "quicksort.h"

int main(void){

  int array[] = {13,19,9,5,12,8,7,4,21,2,6,11};
  unsigned int i=0;

  puts("Before sorting");
  for(i=0;i<sizeof(array)/ sizeof(int);i++){
    printf("%d ", array[i]);
  }

  randomized_quicksort(array,sizeof(array)/sizeof(int));

  puts("\nAfter sorting");
  for(i=0;i< sizeof(array)/ sizeof(int);i++){
    printf("%d ", array[i]);
  }

  getchar();
return 0;
}
