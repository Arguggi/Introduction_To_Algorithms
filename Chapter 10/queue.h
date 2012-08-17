/** \file queue.h
    \author Ruggero Dalo
    \brief queue Algorithms
*/

/** \fn int QueueInit(queue* Q,int size)
    \brief Initializes queue structure
    \arg Checks for malloc failure
  \param Q Pointer to an already allocated queue struct
  \param size Size of new the dynamically allocated array
  \return \arg 0 if memory is correctly allocated
          \arg exit(EXIT_FAILURE) if malloc fails
*/

/** \fn void Enqueue(queue* Q,int x)
    \brief Adds elements to the tail of queue
    \arg Checks for queue overflow and prints queue Overflow to stderr.
    \arg If necessary the tail index is wrapped around to the first element of the array.
    \param Q Pointer to a queue struct initialized with QueueInit
    \param x Integer to be added to the queue
*/

/** \fn int Dequeue(queue* Q)
    \brief Returns element from the head of the queue
    \arg Checks for queue underflow and prints queue Underflow to stderr.
    \arg If necessary the tail index is wrapped around to the first element of the array.
    \param Q Pointer to a queue struct initialized with QueueInit
    \return \arg element in array[head]
            \arg 0 if an underflow in found
*/

/** \fn void QueueDestroy(queue* Q);
    \brief Free's memory
    \param Q Pointer to a queue struct initialized with QueueInit
*/

#include <stdlib.h>
#include <stdio.h>

/** \struct queue queue.h "Chapter 10/queue.h"
    \brief queue struct
*/
typedef struct
{
	int* array;   /**< Pointer to dynamically allocted \c int array */
	int tail;     /**< Index of the tail of the queue; */
	int head;     /**< Index of the head of the queue; */
	int size;     /**< Size of the queue */
	int elements; /**< Number of elements inserted in the queue */
}queue;

int QueueInit(queue* Q,int size);
void Enqueue(queue* Q,int x);
int Dequeue(queue* Q);
void QueueDestroy(queue* Q);


