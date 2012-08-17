CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99 -pedantic
OBJ = heap.o heap_test.o

heap : $(OBJ)

heap_test.o : heap_test.c heap.h
	$(CC) -c heap_test.c $(CFLAGS)

heap.o : heap.c heap.h
	$(CC) -c heap.c $(CFLAGS)
	
.PHONY : clean

clean : 
	rm heap $(OBJ) 
