/** \file maxarray.h
    \author Ruggero Dalo
    \brief Maximum subarray Algorithms
*/

/** \struct Max maxarray.h "Chapter 4/maxarray.h"
    \brief Struct containing 2 indexs and the sum of array[maxlf] to array[maxrt]
    \param maxlf Left index of the maximum subarray
    \param maxrt Right index of the maximum subarray
    \param maxsum Sum of the elements from array[maxlf] to [maxrt]
*/

/** \fn Max * max_crossing_sub(int *array, int l,int h)
    \brief Finds maximum sum of elements crossing the (l+h)/2 index
    \param array Integer Array
    \param l Low/Left index
    \param h High/Right index
    \return Pointer to a Max struct containing index and sum of the maximum subarray found in array[l]-array[h]
    \warning The Returned memory address must be free'd to avoid memory leaks
*/

/** \fn Max * max_subarray(int *array,int l, int h)
    \brief Recursive funtion
    \param array Integer Array
    \param l Low/Left index
    \param h High/Right index
    \return Pointer to a Max struct containing index and sum of the maximum subarray found in array[l]-array[h]
    \warning The Returned memory address must be free'd to avoid memory leaks
*/

/** \fn void max_subarray_quadratic(int *array,int size,Max *result)
    \brief Brute force solution to the max sub array problem
    \param array Integer Array
    \param size Elements in the array
    \param *result Pointer to an already allocated structure where the result is stored
*/

/** \fn void max_subarray_linear(int *array,int size,Max *result);
    \brief Kadane's algorithm
    \param array Integer Array
    \param size Elements in the array
    \param *result Pointer to an already allocated structure where the result is stored
*/

#ifndef MAXARRAY_H_INCLUDED
#define MAXARRAY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct Maxtag
{
  int maxlf;
  int maxrt;
  int maxsum;
}Max;

Max * max_crossing_sub(int *array, int l,int h);
Max * max_subarray(int *array,int l, int h);
void max_subarray_quadratic(int *array,int size,Max *result);
void max_subarray_linear(int *array,int size,Max *result);

#endif // MAXARRAY_H_INCLUDED
