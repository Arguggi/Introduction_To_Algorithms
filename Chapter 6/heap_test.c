//Author: Ruggero D'Alò
//Chapter 6 algorithms test
#include "heap.h"

int main(void){
  int array[] = {5, 13, 2, 25, 7, 17, 20, 8, 4},i=0;
  puts("Before heapsort");
  for (i=0;i<sizeof(array)/sizeof(int);i++){
    printf("%d ", array[i]);
  }

  heapsort(array,sizeof(array)/sizeof(int));

  puts("\nAfter heapsort");
  for (i=0;i<sizeof(array)/sizeof(int);i++){
    printf("%d ", array[i]);
  }
  getchar();
return 0;
}
