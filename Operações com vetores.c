#include <stdio.h>

int main(){

int vetor1[3], vetor2[3], vetor3[3], A[3];

scanf("%d" "%d" "%d", &vetor1[0], &vetor2[0], &vetor3[0]);
scanf("%d" "%d" "%d", &vetor1[1], &vetor2[1], &vetor3[1]);
scanf("%d" "%d" "%d", &vetor1[2], &vetor2[2], &vetor3[2]);    

A[0] = vetor1[0] + vetor1[1] - (5*vetor1[2]);
A[1] = vetor2[0] + vetor2[1] - (5*vetor2[2]);  
A[2] = vetor3[0] + vetor3[1] - (5*vetor3[2]);

printf("A = [%d,%d,%d]", A[0], A[1], A[2]);    
    
    return 0;
}