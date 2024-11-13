#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j, sum;
    // TODO: Checking that every row and column add up to M
    
    // check every column add up to M
    for(i = 0; i < n; i++){
        sum = 0;
        for(j = 0; j < n; j++){
            sum = sum + square[i][j];
            }
            if (sum == M){
            continue;
            }
            else{
                printf("the sum of column %d is not equal to M", i + 1);
                return 0;
            }
    }


    // check every row add up to M
    for(j = 0; j < n; j++){
        sum = 0;
        for(i = 0; i < n; i++){
            sum = sum + square[i][j];
            }
            if (sum == M){
                continue;
            }
            else{
                printf("the sum of row %d is not equal to M", j + 1);
                return 0;
            } 
    }


    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square
    
    // check every main diagonals add up to M
        sum = 0;
        for(i = 0; i < n; i++){
            sum = sum + square[i][i];
            }
            if (sum == M){
                continue;
            }
            else{
                printf("the sum of main diagonal are not equal to M");
                return 0;
            }
    
    
        // check every secondary diagonals add up to M
        sum = 0;
        for(i = 1; i < n; i++){
            sum = sum + square[i][i - 1];
            }
            if (sum == M){
                continue;
            }
            else{
                printf("the sum of secondary diagonal are not equal to M");
                return 0;
            } 


        // check every secondary diagonals add up to M
        sum = 0;
        for(i = 0; i < n - 1; i++){
            sum = sum + square[i][i + 1];
            }
            if (sum == M){
                continue;
            }
            else{
                printf("the sum of secondary diagonal are not equal to M");
                return 0;
            } 

    return 1;
}

