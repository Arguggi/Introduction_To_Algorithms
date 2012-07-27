#include "stack.h"

#define SIZE 5

int main(void){
	stack Stack;
	int i=0;

	StackInit(&Stack,SIZE);
	for (i=0;i<SIZE;++i){
    push(&Stack,i);
	}

	for (;i<SIZE+4;++i){
    push(&Stack,i);
	}

	for(i=0;i<SIZE+6;++i){
    printf("%d\n", pop(&Stack));
  }

	StackDestroy(&Stack);
getchar();
return 0;
}
