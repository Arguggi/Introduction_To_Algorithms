//Author: Ruggero D'Alò

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
