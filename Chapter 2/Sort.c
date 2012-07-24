//Author: Ruggero D'Alò
//Chapter 2 algorithms implementation

#include "Sort.h"

void insertion_sort(int* array,int size)
{
int i=0, j=0,key=0;

  for (j=1;j<size;j++){
    key = *(array+j);
    i = j-1;
    while (i>=0 && *(array+i+1)<*(array+i)){
      *(array+i+1) = *(array+i);
      *(array+i) = key;
      i--;
    }
  }
return;
}

// Exercise 2.1-2
void reverse_insertion_sort(int* array,int size)
{
int i=0, j=0,key=0;

  for (j=1;j<size;j++){
    key = *(array+j);
    i = j-1;
    while (i>=0 && *(array+i+1)>*(array+i)){
      *(array+i+1) = *(array+i);
      *(array+i) = key;
      i--;
    }
  }
return;
}

//Exercise 2.2-2
void selection_sort(int* array,int size)
{
int i=0,j=0,temp=0,pos=0;

  for (j=0;j<size;j++){
    pos = j;
    for (i=j+1;i<size;i++){
      if(*(array+i)<*(array+pos)){
        pos = i;
      }
    }
    if (pos != j){
      temp = array[j];
      array[j] = array[pos];
      array[pos] = temp;
    }
  }
return;
}

void merge(int* array,int l,int m,int h)
{
  int arr_copy1[h-m+1], arr_copy2[m-l+1],i=0,j=0,k=0,n1=0,n2=0;

  for (i=0;i<m-l+1;i++)
    arr_copy1[i] = array[l+i];
  for (j=0;j<h-m;j++)
    arr_copy2[j] = array[m+j+1];

  n1=i;n2=j;
  i=0;j=0;

  for (k=l;k<=h;k++){
    if ((arr_copy1[i]<=arr_copy2[j] || j >= n2) && i <n1)
      array[k] = arr_copy1[i++];
    else
      array[k] = arr_copy2[j++];
  }
return;
}

void merge_sort(int* array,int l,int h){
  int m=0;

  if (l<h){
    m = (l+h)/2;
    merge_sort(array,l,m);
    merge_sort(array,m+1,h);

    merge(array,l,m,h);
  }
return;
}
