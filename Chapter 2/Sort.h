//Author: Ruggero D'Alò

#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

void insertion_sort(int * array,int size);
void reverse_insertion_sort(int * array,int size);
void selection_sort(int * array, int size);
void merge(int *array, int l,int m,int h);
void merge_sort(int *array,int low, int high);

#endif /* SORT_H_INCLUDED */
