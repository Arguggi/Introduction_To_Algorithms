#include "stack.h"

int StackInit(stack* S,int size){
  if ((S->array = malloc(sizeof(int)*size)) != NULL){
    S->index = -1;
    S->size = size;
    return 0;
  }
  else {
    fprintf(stderr, "Failed to initialize memory");
    exit(EXIT_FAILURE);
  }
}

int StackEmpty(stack* S){
  if (S->index < 0)
    return 1;
  else return 0;
}

int StackFull(stack* S){
  if (S->index+1 >= S->size)
    return 1;
  else return 0;
}

int StackRealloc(stack* S){

  if ((S->array = realloc(S->array,sizeof(int)*(S->size)*2)) != NULL){
    S->size = (S->size)*2;
    return 1;
  }
  else return 0;
}

int push(stack* S,int x){
  if (StackFull(S)){
    if (StackRealloc(S)){
      S->index++;
      S->array[S->index] = x;
      return 0;
    }
    else{
      fprintf(stderr, "Failed to re-initialize memory");
      exit(EXIT_FAILURE);
    }
  }
  else {
    S->index++;
    S->array[S->index] = x;
    return 0;
  }
}

int pop(stack* S){
  if (StackEmpty(S)){
    fprintf(stderr,"Stack Underflow (0 will be returned)");
    return 0;
  }
  else {
    return S->array[S->index--];
  }
}

void StackDestroy(stack* S){
  free(S->array);
  S->size = 0;
  S->index = -1;
return;
}







