## Practical 6

This folder contain practical 6 codes. Including Matrix Multiplication. And step 6 and step 7 will be excuted individually.

### Compile: (before the step 6)

* gcc -o matrix_mult matrix_mult.c

### Excute:

* ./matrix_mult

### Result:

* The matrix C is:
* 11.000000 2.000000 -7.000000 -16.000000
* 14.000000 2.000000 -10.000000 -22.000000
* 17.000000 2.000000 -13.000000 -28.000000
* 20.000000 2.000000 -16.000000 -34.000000
* 23.000000 2.000000 -19.000000 -40.000000

* The matrix A is:
* 2.000000 3.000000 4.000000
* 3.000000 4.000000 5.000000
* 4.000000 5.000000 6.000000
* 5.000000 6.000000 7.000000
* 6.000000 7.000000 8.000000

* The matrix B is:
* 0.000000 -1.000000 -2.000000 -3.000000
* 1.000000 0.000000 -1.000000 -2.000000
* 2.000000 1.000000 0.000000 -1.000000

## For Step 6

### Compile:

* gcc -c main.c
* gcc -c matmult.c
* gcc -o matmultC main.o matmult.o

### Another format for complie:

* gcc main.c mm.c -o matmult

### Excute:

* ./matmultC

### Another format for excute:

* ./matmult

### Result:

* The matrix C is:
* 11.000000 2.000000 -7.000000 -16.000000
* 14.000000 2.000000 -10.000000 -22.000000
* 17.000000 2.000000 -13.000000 -28.000000
* 20.000000 2.000000 -16.000000 -34.000000
* 23.000000 2.000000 -19.000000 -40.000000
* The matrix A is:
* 2.000000 3.000000 4.000000
* 3.000000 4.000000 5.000000
* 4.000000 5.000000 6.000000
* 5.000000 6.000000 7.000000
* 6.000000 7.000000 8.000000
* The matrix B is:
* 0.000000 -1.000000 -2.000000 -3.000000
* 1.000000 0.000000 -1.000000 -2.000000
* 2.000000 1.000000 0.000000 -1.000000

### For Step 7

### Excute

* make all

### Result

* gcc  -c -O3 main.c
* gcc  -c -O3 matmult.c
* gcc  -o mmc main.o matmult.o -lm
