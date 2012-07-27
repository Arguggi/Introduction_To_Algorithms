/** \file stack.h
    \author Ruggero Dalo
    \brief stack Algorithms
*/

/** \fn int StackInit(stack* S,int size)
    \brief Initializes stack structure
    \arg Checks for malloc failure
  \param S Pointer to an already allocated stack struct
  \param size Size of new the dynamically allocated array
  \return \arg 0 if memory is correctly allocated
          \arg exit(EXIT_FAILURE) if malloc fails
*/

/** \fn int StackEmpty(stack* S)
    \brief Checks for empty stack
    \param S Pointer to a stack struct initialized with stackInit
    \return \arg 1 if stack is empty
            \arg 0 if stack is not empty
*/

/** \fn int StackFull(stack* S)
    \brief Checks for full stack
    \param S Pointer to a stack struct initialized with stackInit
    \return \arg 1 if stack is full
            \arg 0 if stack is not full
*/

/** \fn int StackRealloc(stack* S)
    \brief Array is realloc'd so that final size = 2*initial size
    \param S Pointer to a stack struct initialized with StackInit
    \return \arg 0 if memory is correctly allocated
            \arg exit(EXIT_FAILURE) if realloc fails
*/

/** \fn int push(stack* S,int x)
    \brief Adds elements to the top of the stack
    \arg If stack is full the array is realloced
    \param S Pointer to a stack struct initialized with stackInit
    \param x Integer to be added to the stack
    \return \arg 0 if x is pushed
            \arg exit(EXIT_FAILURE) if realloc fails
*/

/** \fn int pop(stack* S)
    \brief Pops last element of the stack
    \arg Checks for empty stack and if necessary prints stack Underflow to stderr.
    \param S Pointer to a stack struct initialized with stackInit
    \return \arg Last element
            \arg 0 if stack is empty
*/

/** \fn void StackDestroy(stack* Q);
    \brief Free's memory
    \param S Pointer to a stack struct initialized with StackInit
*/

#include <stdlib.h>
#include <stdio.h>

/** \struct stack stack.h "Chapter 10/stack.h"
    \brief stack struct
*/

typedef struct
{
	int* array; /**< Pointer to dynamically allocted \c int array */
	int index;  /**< Index of the top of the stack */
	int size;   /**< Size of the stack */
}stack;

int StackInit(stack* S,int size);
int StackEmpty(stack* S);
int StackFull(stack* S);
int StackRealloc(stack* S);
int push(stack* S,int x);
int pop(stack* S);
void StackDestroy(stack* S);

