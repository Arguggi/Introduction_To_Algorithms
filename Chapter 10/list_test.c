#include "list.h"
#include <stdio.h>

int main(void){

  Node* List=NULL;
  Node* Temp=NULL;
  int i=0;

  List = ListInit(10);
  for (i=0;i<10;++i){
    NodeInsert(&List,i);
  }

  PrintList(List);

  putchar('\n');

  NodeDelete(&List, 15);

  if ((Temp = ListSearch(List,15))){
    printf("Returned address:%p", Temp);
  }

  PrintList(List);

  putchar('\n');

  ListDelete(&List);

getchar();
return 0;
}
