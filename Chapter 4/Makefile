CC=gcc
CFLAGS=-Wall -Wextra -std=c99 -pedantic
OBJ_MATRIX = matrix.o matrix_test.o
OBJ_MAXARRAY = maxarray.o maxarray_test.o

all : matrix maxarray

matrix : $(OBJ_MATRIX)

matrix_test.o : matrix_test.c matrix.h
	$(CC) -c matrix_test.c $(CFLAGS)

matrix.o : matrix.c matrix.h
	$(CC) -c matrix.c $(CFLAGS)
	
maxarray : $(OBJ_MAXARRAY)

maxarray_test.o : maxarray_test.c maxarray.h
	$(CC) -c maxarray_test.c $(CFLAGS)

maxarray.o : maxarray.c maxarray.h
	$(CC) -c maxarray.c $(CFLAGS)


.PHONY : clean

clean : 
	rm matrix maxarray $(OBJ_MATRIX) $(OBJ_MAXARRAY)
