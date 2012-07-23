//Author: Ruggero D'Alò
//Chapter 9 algorithms test
#include <stdio.h>
#include "medians.h"

int main(void){
  int array[]={-59,2,58,4,51,8,9,-25,-5,26,-26,-1111,12,64,97,26,-59,-10000};
  int rank=19;

  printf("There are %d numbers smaller than %d in the array.(Containing %d elements)",rank-1,select(array,sizeof(array)/sizeof(int),rank),sizeof(array)/sizeof(int));
  printf("\nThere are %d numbers smaller than %d in the array.(Containing %d elements)",rank-1,randomized_select(array,sizeof(array)/sizeof(int),rank),sizeof(array)/sizeof(int));
  getchar();
return 0;
}
