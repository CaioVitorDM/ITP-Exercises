#include <stdio.h>

int main(){
 
int nota1, nota2, nota3, peso1, peso2, peso3;


printf("Digite as notas obtidas: ");
scanf("%d", &nota1);
scanf("%d", &peso1);
scanf("%d", &nota2);
scanf("%d", &peso2);
scanf("%d", &nota3);
scanf("%d", &peso3);

printf("%d, %d\n %d, %d\n %d, %d\n", nota1, peso1, nota2, peso2, nota3, peso3);

	return 0;
}