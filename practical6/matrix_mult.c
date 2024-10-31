#include <stdio.h>

/* Define n, p, q */
#define n 5 
#define p 3 
#define q 4

float multiply(int i, int j, double A[n][p], double B[p][q]);

int main(void) {
    int i, j; // loop indices
    
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
    for(i = 0; i < n; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = multiply(i, j, A, B);    
        }
    }

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

float multiply(int i, int j, double A[n][p], double B[p][q]) {
    float sum = 0;
    int k;
    
    for(k = 0; k < p; k++) {
        sum += A[i][k] * B[k][j];
    }
    
    return sum;
}
