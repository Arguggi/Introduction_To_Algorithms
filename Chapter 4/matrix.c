//Author: Ruggero D'Alò

#include "matrix.h"

//Matric Multiplication - Cubic O(n^3)
void square_matrix_multiply(int *A,int *B,int *C,int size){

  int i=0,j=0,k=0,sum=0;

  for (i=0;i<size*size;i += size){
    for (j=0;j<size;j++){
      sum=0;
      for (k=0;k<size;k++){
        sum = sum + ((*(A+i+k))*(*(B+(k*size)+j)));
      }
      *(C+i+j) = sum;
    }
  }
return;
}
