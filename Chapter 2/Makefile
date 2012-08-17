CC=gcc
CFLAGS=-Wall -Wextra -std=c99 -pedantic
OBJ = Sort.o main.o

Sort : $(OBJ)

Sort.o : Sort.c Sort.h
	$(CC) -c Sort.c $(CFLAGS)

main.o : main.c Sort.h
	$(CC) -c main.c $(CFLAGS)

.PHONY : clean

clean : 
	rm Sort $(OBJ) 
