//Author: Ruggero D'Alò
//Chapter 6 algorithms

#include "heap.h"


void max_heapify (int *array,int heap_size,int index){
  int largest=index,temp=0;

  if ((index*2+1 < heap_size) && (array[index*2+1] >= array[largest])){ // Check Left node
    largest = index*2+1;
  }
  if ((index*2+2 < heap_size) && (array[index*2+2] >= array[largest])){ // Check Right node
    largest = index*2+2;
  }
  if (largest != index){
    temp = array[index]; // Swap largest child with parent
    array[index] = array[largest];
    array[largest] = temp;
    max_heapify(array,heap_size,largest);
  }
return;
}

void min_heapify (int *array, int heap_size,int index){
  int smallest=index,temp=0;

  if ((index*2+1 < heap_size) && (array[index*2+1] <= array[smallest])){ // Check Left node
    smallest = index*2+1;
  }
  if ((index*2+2 < heap_size) && (array[index*2+2] <= array[smallest])){ // Check Right node
    smallest = index*2+2;
  }
  if (smallest != index){
    temp = array[index]; // Swap smallest child with parent
    array[index] = array[smallest];
    array[smallest] = temp;
    min_heapify(array,heap_size,smallest);
  }
return;
}

void build_max_heap(int *array,int size){
  int i=0;

  for (i=(size-2)/2;i>=0;i--){
    max_heapify(array,size,i);
  }
return;
}

void heapsort (int *array,int size){
  int i=0,temp=0;

  build_max_heap(array,size);

  for(i=size-1;i>=0;i--){
    temp = array[0];
    array[0] = array[i];
    array[i] = temp;
    max_heapify(array,i,0);
  }
return;
}


