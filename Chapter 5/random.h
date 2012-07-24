/** \file random.h
    \author Ruggero Dalo
    \brief Randomize Array
*/

/** \fn void randomized_hire_assistant (int *array, int size)
    A new array (B) will be initialized with random values.
    B[i] = key, array[i] = value.
    B is then sorted and array is modified accordingly.
    \param array input array
	\param size Elements in the array
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

void randomized_hire_assistant (int *array, int size);

#endif /* RANDOM_H_INCLUDED */
