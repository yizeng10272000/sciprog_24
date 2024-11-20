#include <stdio.h>

/* Define n, p, q */
#define n 5 
#define p 3 
#define q 4

// Matrix Multiplication C = A * B
void matmult(double A[n][p], double B[p][q], double C[n][q]){
    int i, j, k;
    for(i = 0; i < n; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
            for(k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
