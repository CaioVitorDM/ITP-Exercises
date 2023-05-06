#include <stdio.h>

int main(){

int vetor_A[20]; 
int vetor_mul3[20], vetor_mul4[20], vetor_nm[20];
int i;
int a, b, c = 0;
int tam_a, tam_b, tam_c = 0;


for(i = 0; i < 20; i++){
	scanf("%d", &vetor_A[i]);
	if(vetor_A[i] % 3 == 0){
		vetor_mul3[a] = vetor_A[i];  //o vetor de multiplo de 3 está como [a], pois no quando for na linha seguinte e repetir o código pulará para a próxima casa do vetor (a++).
		a++;
		tam_a = a;     // definido o tamanho para poder aplicar o if e deixar as vírgulas certas para dar a resposta correta.
	}

	if(vetor_A[i] % 4 == 0){
		vetor_mul4[b] = vetor_A[i];
		b++;
		tam_b = b;
	}

	if(vetor_A[i] % 3 != 0 && vetor_A[i] % 4 != 0){
		vetor_nm[c] = vetor_A[i];
		c++;
		tam_c = c;
	}
}

printf("a)");
for(a = 0; a <= tam_a; a++){
	printf("%d", vetor_mul3[a]);
	if (a == tam_a - 1){
		break;
	}
	else{
		printf(",");
	}
}

printf("\nb)");
for(b = 0; b <= tam_b; b++){
	printf("%d", vetor_mul4[b]);
	if (b == tam_b - 1){
		break;
	}
	else{
		printf(",");
	}
}

printf("\nc)");
for(c = 0; c <= tam_c; c++){
	printf("%d", vetor_nm[c]);
	if (c == tam_c - 1){
		break;
	}
	else{
		printf(",");
	}
}

return 0;
}





