#include "random.h"
#define SIZE 10

int main(void)
{
  int array[SIZE],i=0;

  puts("Ordered");
  for(i=0;i<SIZE;i++){
    array[i] = i+1
    printf("%d\n", array[i]);
  }
  randomized_hire_assistant(array, SIZE);

  puts("Randomized");
  for(i=0;i<SIZE;i++){
    printf("%d\n", array[i]);
  }
  getchar();
return 0;
}
