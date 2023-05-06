#include <stdio.h>
#include <math.h>

int main(){

int i, n, v1, v2, v3, v4, v5, soma;


scanf("%d", &n);

v1 = n;
v2 = 0;
v2 = v1 % 10;

v3 = log10(v1);
v4 = pow(10, v3);
v5 = v1 / v4;

soma = v2 + v5;




printf("O último numero é: %d\n", v2);
printf("O primeiro número é: %d\n", v5);
printf("A soma é: %d\n", soma);







	return 0; 
}