#include <stdio.h>

/* Define n, p, q */
#define n 5 
#define p 3 
#define q 4

void matmult(double A[n][p], double B[p][q], double C[n][q]);

int main(void) {
    int i, j;
    
    /* Declare the matrix A, B and C */
    double A[n][p], B[p][q], C[n][q];

    /* Initialise the matrix A, B, C */
    /* Initialise C */
    for(i = 0; i < n; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;    
        }
    }

    /* Initialise A, due to C start at 0, so i and j should plus 1 */
    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            A[i][j] = (i + 1) + (j + 1);    
        }
    }

    /* Initialise B, due to C start at 0, so i and j should plus 1 */
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            B[i][j] = (i + 1) - (j + 1);    
        }
    }

    /* Determine the elements of C */
    matmult(A, B, C);

    printf("The matrix C is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }
    
    printf("The matrix A is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("The matrix B is:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
