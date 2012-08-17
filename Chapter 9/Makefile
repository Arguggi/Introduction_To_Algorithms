INCLUDE = -I "../Chapter 7/"
CC=gcc
FLAGS=-Wall -Wextra -std=c99 -pedantic
OBJ = medians_test.o medians.o quicksort.o
QSPATH = ../Chapter\ 7/

medians : $(OBJ)

medians_test.o : medians_test.c medians.h 
	$(CC) -c medians_test.c $(FLAGS)
	
medians.o : medians.c medians.h $(QSPATH)quicksort.h
	$(CC) -c medians.c $(FLAGS) $(INCLUDE)

quicksort.o :$(QSPATH)quicksort.c $(QSPATH)quicksort.h
	$(CC) -c $(QSPATH)quicksort.c $(FLAGS) $(INCLUDE)

.PHONY : clean

clean : 
	rm medians *.o
