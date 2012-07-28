#include "list.h"

Node* ListInit(int key){
  Node* Head = NULL;
  if ((Head = malloc(sizeof(Node))) == NULL){
    fprintf(stderr, "Failed to initialize memory\n");
    exit(EXIT_FAILURE);
  }
  Head->key = key;
  Head->next = NULL;
  Head->prev = NULL;
  return Head;
}

int NodeInsert(Node** HeadPtr,int key){
  Node* New_Head = NULL;

  if (*HeadPtr == NULL){ // Empty List
    fprintf(stderr,"List has not been initialized\n");
    return 0;
  }

  if ((New_Head = malloc(sizeof(Node))) == NULL){ // Malloc check
    fprintf(stderr, "Failed to initialize memory for new node, %d not inserted\n",key);
    return 0;
  }
  else { // Create new node
    New_Head->key = key;
    New_Head->prev = NULL;
    New_Head->next = *HeadPtr;
    (*HeadPtr)->prev = New_Head;
    *HeadPtr = New_Head;
    return 1;
  }
}

int NodeDelete(Node** HeadPtr,int key){

  Node* Scan=(*HeadPtr)->next;

  if (*HeadPtr == NULL){ //Checks for empty list
    fprintf(stderr,"List has not been initialized\n");
    return 0;
  }
  if ((*HeadPtr)->key == key){ //HeadPtr must be changed since the head node must be deleted
    Scan = *HeadPtr;
    *HeadPtr = (*HeadPtr)->next;
    (*HeadPtr)->prev = NULL; //First node's ->prev is set to NULL
    free(Scan); //Free deleted Head
    return 1;
  }

  while(Scan != NULL && Scan->key != key){//Scans list
    Scan = Scan->next;
  }

  if (Scan){ // Key found
    (Scan->prev)->next = Scan->next;//Scan->Prev node points to Scan->next
    (Scan->next)->prev = Scan->prev;//Scan->next node points to Scan->prev
    free(Scan);
    return 1;
  }
  else {
    printf("%d not found in list\n",key);
    return 0;
  }
}

Node* ListSearch(Node* Head,int key){

  Node* Scan=Head;

  while (Scan != NULL && Scan->key != key){
    Scan = Scan->next;
  }

  if(Scan)//Key found, address returned
    return Scan;
  else { // Key not found
    printf("%d not found in list\n",key);
    return 0;
  }
}


void PrintList(Node* Head){

  Node* Scan = Head;

  while (Scan != NULL){
    printf("%d ", Scan->key);
    Scan = Scan->next;
  }
return;
}

void ListDelete(Node** HeadPtr){

  Node* Scan = (*HeadPtr)->next;
  Node* Temp = NULL;
  while(Scan != NULL){ // Free every allocated node
    Temp = Scan->next;
    free(Scan);
    Scan = Temp;
  }
return;
}










