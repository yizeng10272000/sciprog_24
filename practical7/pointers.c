#include<stdio.h>
#include<stdlib.h>

int * allocatearry(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main(void){
    int size = 25;
    int *array;
    // array is the address we allocated  
    array = allocatearry(size);
    fillwithones(array, size);
    printarray(array, size);
    freepointer(array);

    return 0;

}

// allocate the dynamic memory to the variable array
int *allocatearry(int n){
    int *temp;
    temp = (int *)malloc(n * sizeof(int));
    return temp;

}

// give the variable array the value of 1
void fillwithones(int *p, int n){
    int i;
    for (i = 0; i < n; i++){
          p[i] = 1;
    
    }
}

// print the array, which is n-th one
void printarray(int *p, int n){
    int i;
    for(i = 0; i < n; i++){
          printf("%d ", p[i]);
    
    }
    printf("\n");
}

// free the dynamic allocated memory
void freepointer(int *p){
    free(p);

}