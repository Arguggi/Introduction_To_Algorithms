CC=gcc
CFLAGS=-Wall -Wextra -std=c99 -pedantic
OBJ_LIST = list.o list_test.o
OBJ_QUEUE = queue.o queue_test.o
OBJ_STACK = stack.o stack_test.o

all : list queue stack

list : $(OBJ_LIST)

list_test.o : list_test.c list.h
	$(CC) -c list_test.c $(CFLAGS)

list.o : list.c list.h
	$(CC) -c list.c $(CFLAGS)
	
queue : $(OBJ_QUEUE)

queue_test.o : queue_test.c queue.h
	$(CC) -c queue_test.c $(CFLAGS)

queue.o : queue.c queue.h
	$(CC) -c queue.c $(CFLAGS)

stack : $(OBJ_STACK)

stack_test.o : stack_test.c stack.h
	$(CC) -c stack_test.c $(CFLAGS)

stack.o : stack.c stack.h
	$(CC) -c stack.c $(CFLAGS)

.PHONY : clean

clean : 
	rm list queue stack $(OBJ_LIST) $(OBJ_QUEUE) $(OBJ_STACK)
