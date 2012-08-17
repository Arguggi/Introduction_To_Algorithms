/** \file medians.h
    \author Ruggero Dalo
    \brief Select element in array according to rank in linear time
*/

/** \fn int selectf_algo(int* array,int l,int h,int i)
    Uses partion algorithm from quicksort
    \param array Array to be scanned
    \param l Low/Left index
    \param h High/Right index
    \param i Desired rank
    \return Integer of rank i
    \note Using the wrapper funtion, selectf, is recommended.
*/
/** \fn int selectf(int* array,int size,int rank)
    Rank 1 = smallest element in the array\n
    Rank Size = biggest element in the array\n
    Rank < 1 or Rank > size is not defined.
    \param array Array to be scanned
    \param size Elements in the array
    \param rank Desired rank
    \return Integer with the specified rank
*/

/** \fn int randomized_selectf_algo(int* array,int l,int h,int i)
    Uses randomized_partion algorithm from quicksort
    \param array Array to be scanned
    \param l Low/Left index
    \param h High/Right index
    \param i Desired rank
    \return Integer of rank i
    \note Using the wrapper funtion, randomized_selectf, is recommended.
*/
/** \fn int randomized_selectf(int* array,int size,int rank)
    Rank 1 = smallest element in the array\n
    Rank Size = biggest element in the array\n
    Rank < 1 or Rank > size is not defined.
    \param array Array to be scanned
    \param size Elements in the array
    \param rank Desired rank
    \return Integer with the specified rank
*/




#ifndef MEDIANS_H_INCLUDED
#define MEDIANS_H_INCLUDED

int selectf_algo(int* array,int l,int h,int i);
int selectf(int* array,int size,int rank);
int randomized_selectf_algo(int* array,int l,int h,int i);
int randomized_selectf(int* array,int size,int rank);

#endif /* MEDIANS_H_INCLUDED*/
