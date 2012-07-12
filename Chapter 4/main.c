//Author: Ruggero D'Alò
//Chapter 4 algorithms test

#include "chapter4.h"

int main(void)
{
  int array[] = {-15,155,200,-300,599,778,-9595,5200};
  Max * max_array=malloc(sizeof(Max));

  //max_array = max_subarray(array,0,(sizeof(array)/sizeof(int))-1);
  //max_subarray_quadratic(array,(sizeof(array)/sizeof(int)),max_array);
  max_subarray_linear(array,(sizeof(array)/sizeof(int)),max_array);

  printf("Left Index:%d\nRight Index:%d\nMaximum Sum:%d", max_array->maxlf,max_array->maxrt,max_array->maxsum);
  free(max_array);

getchar();
return 0;
}
