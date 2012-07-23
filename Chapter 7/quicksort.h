//Author: Ruggero D'Alò

/** \file quicksort.h
    \brief Quicksort Algorithms
*/

/** \fn int partition(int *array, int l,int h)
    \brief Partions the array around the pivot
    \param array Array to be sorted
    \param l Low/Left index
    \param h High/Right index
*/

/** \fn void quicksort_algo(int *array,int l,int h)
    \brief Quicksort
    \param array Array to be sorted
    \param l Low/Left index
    \param h High/Right index
    \warning The wrapper funtion,quicksort,is recommended.
*/

/** \fn void quicksort(int *array,int size)
    \brief Quicksort wrapper funtion
    \param array Array to be sorted
    \param size Elements in the array
*/

/** \fn int randomized_partition(int *array,int l,int h)
    \brief Partions the array around a random pivot
    \param array Array to be sorted
    \param l Low/Left index
    \param h High/Right index
*/

/** \fn void randomized_quicksort_algo(int *array,int l,int h)
    \brief Randomized Quicksort
    \param array Array to be sorted
    \param l Low/Left index
    \param h High/Right index
    \warning The wrapper funtion,randomized_quicksort,is recommended.
*/

/** \fn void randomized_quicksort(int *array,int size)
    \brief Randomized Quicksort wrapper funtion
    \param array Array to be sorted
    \param size Elements in the array
*/

#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int partition(int *array, int l,int h);
void quicksort_algo(int *array,int l,int h);
void quicksort(int *array,int size);
int randomized_partition(int *array,int l,int h);
void randomized_quicksort_algo(int *array,int l,int h);
void randomized_quicksort(int *array,int size);

#endif /* QUICKSORT_H_INCLUDED*/
