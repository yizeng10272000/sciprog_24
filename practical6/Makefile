CC = gcc # C compiler
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc

mmc: main.o matmult.o
	$(CC) -o $@ $^ $(LDFLAGS)

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o *.mod


# or can be written as

# mmc: main.o matmult.o
#  $(CC) -o mmc main.o matmult.o $(LDFLAGS)

# matmult.o: matmult.c
#   $(CC) -c $(CCFLAGS) matmult.c

# main.o: main.c
#   $(CC) -c $(CCFLAGS) main.c
