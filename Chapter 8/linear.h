/** \file linear.h
    \author Ruggero Dalo
    \brief Sorting in linear time algorithms
*/

/** \fn int findMaxForCountingSort(int* array,int size)
    Finds maximum integer in the array
    \param array Array to be scanned
    \param size Elements in the array
    \return Maximum element
*/

/** \fn void countingSort(int* array,int* sorted,int size,int max)
    Sorts tha array with help from an auxiliary array of size equal to the maximum element in array
    \param array Array to be sorted
    \param sorted Pointer to an already initialized array of size equal to the one to be sorted
    \param size Elements in the array
    \param max Maximum element in the array
*/

#ifndef LINEAR_H_INCLUDED
#define LINEAR_H_INCLUDED

#include <stdio.h>

int findMaxForCountingSort(int* array,int size);
void countingSort(int* array,int* sorted,int size,int max);

#endif /* LINEAR_H_INCLUDED*/
