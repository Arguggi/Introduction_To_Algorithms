#include "tree.h"
#include <stdio.h>

int main(void){

  int i=0, array[]={34,12,65,23,2,8,1,4,5};
  Node* root = NULL;
  root = TreeInit(49);

  for (i=0;i<9;++i){
    NodeInsert(root,array[i]);
  }

  InorderPrintTree(root);

  printf("\nAddress of node with key=49 is %p\n",TreeSearch(root,49));

  printf("Minimum : %d \n", (TreeMinimum(root))->key);

  printf("Maximum : %d \n", (TreeMaximum(root))->key);

  TreeDelete(root);

getchar();
return 0;
}
