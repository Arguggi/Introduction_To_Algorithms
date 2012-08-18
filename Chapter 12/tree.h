/** \file tree.h
    \author Ruggero Dalo
    \brief Binary tree Algorithms
*/

/** \fn Node* TreeInit(int key);
    \brief Initializes tree checking for malloc failure
    \param key Key to be stored in the head node
    \return
    \arg Address of a new Node
    \arg exit(EXIT_FAILURE) if malloc fails
*/

/** \fn Node* NodeInsert(Node* Head,int key);
    \brief Add a new leef with key value
    \param Head Head of the tree
    \param key Key of the new node
    \return
    \arg Head of the tree
*/

/** \fn Node* TreeSearch(Node* Head,int key);
    \brief Searches tree for leed with key stored
    \param Head Head of the tree
    \param key Key that has to be searched.
    \return
    \arg Address of the searched node if found
    \arg 0 if the key isn't stored in the tree 
*/

/** \fn void InorderPrintTree(Node* Head);
    \brief Prints tree in order (lower to higher values) 
    \param Head Head of the tree
*/

/** \fn Node* TreeMinimum(Node* Head);
    \brief Returns the address of the node with minimum key
    \param Head Address of the head of the linked tree
    \return
    \arg Address of the node with the smallest key
*/

/** \fn Node* TreeMaximum(Node* Head);
    \brief Returns the address of the node with maximum key
    \param Head Address of the head of the linked tree
    \return
    \arg Address of the node with the largest key
*/

/** \fn void TreeDelete_Recur(Node* Head)
    \brief Free's memory
    \param Head Address of the pointer that stores the head of the tree
    \note If Head is NULL (Empty Tree), use TreeInit to create a new tree
*/

/** \fn void TreeDelete(Node* Head)
    \brief Wrapper function that also free's the head of the tree
    \param Head Address of the pointer that stores the head of the tree
    \note If Head is NULL (Empty Tree), use TreeInit to create a new tree
*/

#include <stdlib.h>
#include <stdio.h>

/** \struct Node_struct tree.h "Chapter 12/tree.h"
    \brief Binary search tree struct
*/

typedef struct Tree_struct Node; /**< Needed for Node* pointers */
struct Tree_struct
{
  int key; /**< Node key */
	Node* left;  /**< Pointer to the left node */	
	Node* right;   /**< Pointer to the right node */
};

Node* TreeInit(int key);
Node* NodeInsert(Node* Head,int key);
Node* TreeSearch(Node* Head,int key);
void InorderPrintTree(Node* Head);
void PostorderPrintTree(Node* Head);
Node* TreeMinimum(Node* Head);
Node* TreeMaximum(Node* Head);
void TreeDelete_Recur(Node* Head);
void TreeDelete(Node* Head);
int TreeSize(Node* Head);
int MaxDepth(Node* Head);
