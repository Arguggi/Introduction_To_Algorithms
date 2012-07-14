//Author: Ruggero D'Alò
//Chapter 4 algorithms test

#include <stdio.h>
#include "matrix.h"
#define SIZE 4
int main(void)
{
  int A[SIZE][SIZE],B[SIZE][SIZE],C[SIZE][SIZE], i=0,j=0;

  for (i=0;i<SIZE;i++){
    for (j=0;j<SIZE;j++){
      A[i][j] = 2;
      B[i][j] = 1;
    }
  }

  for (i=0;i<SIZE;i++){
    for (j=0;j<SIZE;j++){
      printf("%d ", A[i][j]);
    }
    putchar('\n');
  }

  for (i=0;i<SIZE;i++){
    for (j=0;j<SIZE;j++){
      printf("%d ", B[i][j]);
    }
    putchar('\n');
  }

  putchar('\n');

  square_matrix_multiply(A[0],B[0],C[0],SIZE);

  for (i=0;i<SIZE;i++){
    for (j=0;j<SIZE;j++){
      printf("%d ",C[i][j] );
    }
    putchar('\n');
  }

getchar();
return 0;
}
