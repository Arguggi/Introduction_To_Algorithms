/** \file list.h
    \author Ruggero Dalo
    \brief Linked list Algorithms
*/

/** \fn Node* ListInit(int key)
 \brief Initializes list checking for malloc failure
 \param key Key to be stored in the head node
 \return
  - Address of a new Node
  - exit(EXIT_FAILURE) if malloc fails
*/

/** \fn int NodeInsert(Node** HeadPtr,int key)
  \brief Add a new node with key value to the head of the list
  \param HeadPtr Address of the pointer that stores the head of the list
  \param key Key of the new node
  \return
  - 1 If malloc and insertion is successful
  - 0 If malloc fails or list is empty
*/

/** \fn int NodeDelete(Node** HeadPtr,int key)
  \brief Delets node with key value if it is present in the list
  \param HeadPtr Address of the pointer that stores the head of the list
  \param key Key of the node that has to be deleted.
  \return
  \arg 1 If free and deletion is successful
  \arg 0 If list is empty
*/

/** \fn Node* ListSearch(Node* Head,int key)
    \brief Linear search of the linked list
    \param Head Address of the head of the linked list
    \param key Searched integer
    \return
    - Address of the node with key value if it is saved in the list
    - 0 if key is not present in the list
*/

/** \fn void PrintList(Node* Head)
    \brief Prints linked list
    \param Head Address of the head of the linked list
*/

/** \fn void ListDelete(Node** HeadPtr)
    \brief Free's memory
    \param HeadPtr Address of the pointer that stores the head of the list
    \note *Headptr is set to NULL (Empty List), use ListInit to create a new list
*/

#include <stdlib.h>
#include <stdio.h>

/** \struct Node_struct list.h "Chapter 10/list.h"
    \brief Double linked list struct
*/

typedef struct Node_struct Node; /**< Needed for Node* pointers */
struct Node_struct
{
  int key; /**< Node key */
	Node* next;  /**< Pointer to the next node */
	Node* prev;   /**< Pointer to the previous node */
};

Node* ListInit(int key);
int NodeInsert(Node** HeadPtr,int key);
int NodeDelete(Node** HeadPtr,int key);
Node* ListSearch(Node* Head,int key);
void PrintList(Node* Head);
void ListDelete(Node** HeadPtr);

