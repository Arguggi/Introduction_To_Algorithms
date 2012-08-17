CC=gcc
CFLAGS=-Wall -Wextra -std=c99 -pedantic
OBJ = random.o random_test.o

random : $(OBJ)

random_test.o : random_test.c random.h
	$(CC) -c random_test.c $(CFLAGS)

random.o : random.c random.h
	$(CC) -c random.c $(CFLAGS)
	
.PHONY : clean

clean : 
	rm random $(OBJ) 
