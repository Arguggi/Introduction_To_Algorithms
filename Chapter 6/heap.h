/** \file heap.h
    \author Ruggero Dalo
    \brief Heap/Heapsort related algorithms
*/

/** \fn void max_heapify (int *array,int heap_size,int index)
    Checks parent and children nodes and the biggest element is saved in the parent node. Recursively calls it self on the exchanged children.
    \param array Array to be Heapifyed
    \param heap_size Heap size
    \param index Position in the array
*/

/** \fn void min_heapify (int *array,int heap_size,int index)
    Checks parent and children nodes and the smallest element is saved in the parent node. Recursively calls it self on the exchanged children.
    \param array Array to be Heapifyed
    \param heap_size Heap size
    \param index Position in the array
*/

/** \fn void build_max_heap(int *array,int size)
    Starting at the last parent node it heapifyes the array
    \param array Array to be Heapifyed
    \param size Elements in the array
*/

/** \fn void heapsort (int *array,int size)
    Heapsort
    \param array Array to be Heapifyed
    \param size Elements in the array
*/

#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

#include <stdio.h>

void max_heapify (int *array,int heap_size,int index);
void min_heapify (int *array, int heap_size,int index);
void build_max_heap(int *array,int size);
void heapsort (int *array,int size);

#endif /* HEAP_H_INCLUDED*/
