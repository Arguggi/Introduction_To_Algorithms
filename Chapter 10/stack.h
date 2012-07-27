#include <stdlib.h>
#include <stdio.h>

typedef struct stacktag
{
	int* array;
	int index;
	int size;
}stack;

int StackInit(stack* S,int size);
int StackEmpty(stack* S);
int StackFull(stack* S);
int StackRealloc(stack* S);
int push(stack* S,int x);
int pop(stack* S);
void StackDestroy(stack* S);

