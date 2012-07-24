/** \file Sort.h
    \author Ruggero Dalo
    \brief Sorting Algorithms
*/

/** \fn void insertion_sort(int * array,int size)
    \brief Insertion Sort
    \param array Array to be sorted
    \param size Elements in the array
*/

/** \fn void reverse_insertion_sort(int * array,int size)
    \brief Insertion Sort in decreasing order
    \param array Array to be sorted
    \param size Elements in the array
*/

/** \fn void selection_sort(int * array, int size)
    \brief Selection Sort
    \param array Array to be sorted
    \param size Elements in the array
*/

/** \fn void merge(int *array, int l,int m,int h)
    \brief Merges and sorts 2 subarrays
    \param array Array to be sorted
    \param l Low/Left index
    \param m Medium/Middle index
    \param h High/Right index
*/

/** \fn merge_sort(int *array,int l, int h)
    \brief Merge Sort
    \param array Array to be sorted
    \param l Low/Left index
    \param h High/Right index
*/


#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

void insertion_sort(int * array,int size);
void reverse_insertion_sort(int * array,int size);
void selection_sort(int * array, int size);
void merge(int *array, int l,int m,int h);
void merge_sort(int *array,int l, int h);

#endif /* SORT_H_INCLUDED */
