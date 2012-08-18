#include "tree.h"
#include <stdio.h>

int main(void){

  int i=0, array[]={34,12,65,23,2,100,120};
  Node* root = NULL;
  root = TreeInit(49);

  for (i=0;i<7;++i){
    NodeInsert(root,array[i]);
  }

  InorderPrintTree(root);

  putchar('\n');

  PostorderPrintTree(root);

  printf("\nAddress of node with key=13 is %p\n",(void *)TreeSearch(root,13));

  printf("Minimum : %d \n", (TreeMinimum(root))->key);

  printf("Maximum : %d \n", (TreeMaximum(root))->key);

  printf("Treesize : %d \n", TreeSize(root));
  
  printf("Max depth : %d \n", MaxDepth(root));

  TreeDelete(root);

getchar();
return 0;
}
