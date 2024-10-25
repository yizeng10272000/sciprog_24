CC = gcc
CFLAGS = -Wall

all: main

main: main.o matmult.o
	$(CC) $(CFLAGS) -o main main.o matmult.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c

clean:
	rm -f *.o main
