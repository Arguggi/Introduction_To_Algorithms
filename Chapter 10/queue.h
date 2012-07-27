#include <stdlib.h>
#include <stdio.h>

typedef struct queuetag
{
	int* array;
	int tail;
	int head;
	int size;
	int elements;
}queue;

int QueueInit(queue* Q,int size);
void Enqueue(queue* Q,int x);
int Dequeue(queue* Q);
void QueueDestroy(queue* Q);


