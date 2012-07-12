#ifndef CHAPTER4_H_INCLUDED
#define CHAPTER4_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct maxtag
{
   int maxlf;
   int maxrt;
   int maxsum;
}max;

max * max_crossing_sub(int *array, int l,int h);
max * find_maximum_subarray(int *array,int l, int h);

#endif // CHAPTER4_H_INCLUDED
