
CC=gcc
CFLAGS=-Wall -Wextra -std=c99 -pedantic
OBJ = linear.o linear_test.o

linear : $(OBJ)

linear_test.o : linear_test.c linear.h
	$(CC) -c linear_test.c $(CFLAGS)

linear.o : linear.c linear.h
	$(CC) -c linear.c $(CFLAGS)

.PHONY : clean

clean : 
	rm linear $(OBJ) 
