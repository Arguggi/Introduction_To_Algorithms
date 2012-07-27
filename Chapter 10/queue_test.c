#include "queue.h"

#define SIZE 8

int main(void){
	queue Queue;
	int i=0;

	QueueInit(&Queue,SIZE);

	for (i=0;i<SIZE-2;++i){
    Enqueue(&Queue,i);
	}

	for(i=0;i<SIZE;++i){
    printf("%d\n", Dequeue(&Queue));
  }

	QueueDestroy(&Queue);
getchar();
return 0;
}
