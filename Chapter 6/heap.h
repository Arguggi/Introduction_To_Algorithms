//Author: Ruggero D'Alò

#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

#include <stdio.h>

void max_heapify (int *array,int heap_size,int index);
void min_heapify (int *array, int heap_size,int index);
void build_max_heap(int *array,int size);
void heapsort (int *array,int size);

#endif /* HEAP_H_INCLUDED*/
