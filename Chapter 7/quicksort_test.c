//Author: Ruggero D'Alò
//Chapter 7 algorithms test
#include <stdio.h>
#include "quicksort.h"

int main(void){
  int array[] = {155,-59,18,29,544,26,31,47,59,846,25,59};
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
