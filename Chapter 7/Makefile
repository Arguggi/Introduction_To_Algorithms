CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99 -pedantic
OBJ = quicksort.o quicksort_test.o

quicksort : $(OBJ)

quicksort_test.o : quicksort_test.c quicksort.h
	$(CC) -c quicksort_test.c $(CFLAGS)

quicksort.o : quicksort.c quicksort.h
	$(CC) -c quicksort.c $(CFLAGS)

.PHONY : clean

clean : 
	rm quicksort $(OBJ) 
