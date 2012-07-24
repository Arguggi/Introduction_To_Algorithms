/** \file matrix.h
    \author Ruggero Dalo
    \brief Matrix Multiplication
*/

/** \fn void square_matrix_multiply(int *A,int *B,int *C,int size)
    \brief Square matrix multiplication
    \param A First Matrix
    \param B Second Matrix
    \param C Multiplication result matrix
    \param size Number of colomns/rows of matrix A and B
*/


#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

void square_matrix_multiply(int *A,int *B,int *C,int size);

#endif // MATRIX_H_INCLUDED
