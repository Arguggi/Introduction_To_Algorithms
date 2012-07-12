#include "chapter4.h"

int main(void)
{
   int array[] = {-15,155,200,-300,599,778,-9595,5200};
   max * max_array=NULL;

   max_array = find_maximum_subarray(array,0,(sizeof(array)/sizeof(int))-1);

   printf("Left Index:%d\nRight Index:%d\nMaximum Sum:%d", max_array->maxlf,max_array->maxrt,max_array->maxsum);

   free(max_array);

getchar();
return 0;
}
