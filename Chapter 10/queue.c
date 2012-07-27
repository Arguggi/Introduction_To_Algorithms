#include "queue.h"

int QueueInit(queue* Q,int size){
  if ((Q->array = malloc(sizeof(int)*size)) != NULL){
    Q->tail = size-1;
    Q->head = size-1;
    Q->size = size;
    Q->elements = 0;
    return 0;
  }
  else {
    fprintf(stderr, "Failed to initialize memory\n");
    exit(EXIT_FAILURE);
  }
}

void Enqueue(queue* Q,int x){
  if (Q->elements == Q->size){ // Array is Full
    fprintf(stderr,"\nQueue Overflow\n");
    return;
  }
  else {
    Q->array[Q->tail] = x;
    Q->elements++;

    if (Q->tail+1 == Q->size){ // Wrap around
      Q->tail = 0;
      return;
    }
    else {
      Q->tail++;
      return;
    }
  }
}

int Dequeue(queue* Q){
  int x=0;
  if (Q->elements == 0){ // Empty array
    fprintf(stderr,"\nQueue Underflow (0 Will be returned)\n");
    return 0;
  }
  else {
    if (Q->head+1 == Q->size){ // Wrap around
      x = Q->array[Q->head];
      Q->head = 0;
      Q->elements--;
      return x;
    }
    else {
      Q->elements--;
      return Q->array[Q->head++];
    }
  }
}

void QueueDestroy(queue* Q){
  free(Q->array);
  Q->head = Q->tail = Q->elements = 0;
return;
}







