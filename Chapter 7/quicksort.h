//Author: Ruggero D'Alò

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
