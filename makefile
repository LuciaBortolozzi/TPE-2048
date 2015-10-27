TARGET=ejercicio
OBJS=ejercicio.o getnum.o
CC=gcc
CFLAGS=-g -Wall -ansi -o -Wuninitialized -lm

$(TARGET):$(OBJS)
	$(cc) -o$(TARGET)	$(OBJS)	$(CFLAGS)
	
clean:
	rm *.o
