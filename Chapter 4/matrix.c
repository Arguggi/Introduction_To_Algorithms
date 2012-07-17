//Author: Ruggero D'Alò

#include "matrix.h"

//Matrix Multiplication - Cubic O(n^3)
void square_matrix_multiply(int *A,int *B,int *C,int size){ // To avoid complications I declared a 1D array,
                                                            //the row index has to multiplied by the order of the matrix
  int i=0,j=0,k=0,sum=0;

  for (i=0;i<size;i++){
    for (j=0;j<size;j++){
      sum=0;
      for (k=0;k<size;k++){
        sum = sum + (A[i*size+k])*(B[j+k*size]); // Matrix multiplication,
      }
      C[i*size+j] = sum;
    }
  }
return;
}

