CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99 -pedantic
OBJ = tree.o tree_test.o

tree : $(OBJ) 

tree_test.o : tree_test.c tree.h
	$(CC) -c tree_test.c $(CFLAGS)

tree.o : tree.c tree.h
	$(CC) -c tree.c $(CFLAGS)

.PHONY : clean

clean : 
	rm tree *.o 
