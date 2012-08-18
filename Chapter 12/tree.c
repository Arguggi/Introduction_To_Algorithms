#include "tree.h"

Node* TreeInit(int key){
  Node* Head = NULL;
  if ((Head = malloc(sizeof(Node))) == NULL){
    fprintf(stderr, "Failed to initialize memory\n");
    exit(EXIT_FAILURE);
  }
  Head->key = key;
  Head->right = NULL;
  Head->left = NULL;
  return Head;
}

Node* NodeInsert(Node* Head,int key){
  if(Head == NULL){
   return (TreeInit(key));
  }
  else {
   if (Head->key > key)
     Head->left = NodeInsert(Head->left, key);
   else
     Head->right = NodeInsert(Head->right,key);
   return Head;
  } 
}

Node* TreeSearch(Node* Head,int key){
  if(Head == NULL)
    return 0;
  else {
    if (Head->key == key) return Head; //Key found
    else {
      if (Head->key > key)
        return TreeSearch(Head->left,key);
      else 
        return TreeSearch(Head->right,key);
     }
  }
}

void InorderPrintTree(Node* Head){
  if (Head == NULL) return;
  InorderPrintTree(Head->left); 
  printf("%d ",Head->key);
  InorderPrintTree(Head->right);
return;
}

void PostorderPrintTree(Node* Head){
  if (Head == NULL) return;
  PostorderPrintTree(Head->left);
  PostorderPrintTree(Head->right);
  printf("%d ", Head->key);
  return;
}
Node* TreeMinimum(Node* Head){
  while(Head->left != NULL){
    Head = Head->left;
  }
  return Head;
}

Node* TreeMaximum(Node* Head){
  while(Head->right != NULL){
    Head = Head->right;
  }
  return Head;
}

void TreeDelete_Recur(Node* Head){
  if(Head == NULL) return;
  TreeDelete_Recur(Head->left);
  TreeDelete_Recur(Head->right);
  free(Head->left);
  free(Head->right);
  return;
}

void TreeDelete(Node* Head){
  TreeDelete_Recur(Head);
  free(Head);
  return;
}

int TreeSize(Node* Head){
  if (Head == NULL) return 0;
  else return 1 + TreeSize(Head->left) + TreeSize(Head->right);
}

int MaxDepth(Node* Head){
  if (Head == NULL) return 0;

  if (MaxDepth(Head->left) >= MaxDepth(Head->right))
    return MaxDepth(Head->left) + 1;
  else return (MaxDepth(Head->right) + 1);
}
