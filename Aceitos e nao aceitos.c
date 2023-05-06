#include <stdio.h>

 int main(){
 	int A, B, C, D;

 	scanf("%i", &A);
 	scanf("%i", &B);
 	scanf("%i", &C);
 	scanf("%i", &D);

 	int soma = C + D;
 	int soma2 = A + B;


 	if(B > C && D > A && soma > soma2 && C >= 0 && D>= 0){
 		printf("Valores Aceitos");

 	}

 	else if(C >= B && A > D && soma2 > soma && (0 > C || 0 > D)){
 		printf("Valores Não Aceitos condições violadas: 1 2 3 4");	
 	}

    else if(C > B && A > D && soma2 > soma){
 		printf("Valores Não Aceitos condições violadas: 1 2 3");
 	}

 	else if (A > D && soma2 > soma && (0 > C || 0 > D)){
      printf("Valores Não Aceitos condições violadas: 2 3 4");
   }
 	
   else if(C > B && A > D){
      printf("Valores Não Aceitos condições violadas: 1 2");
   }
   
   else if(C > B && soma2 > soma){
      printf("Valores Não Aceitos condições violadas: 1 3");
   }

   else if(C > B && (0 > C || 0 > D)){
      printf("Valores Não Aceitos condições violadas: 1 4");
   }

   else if(A > D && soma2 > soma){
      printf("Valores Não Aceitos condições violadas: 2 3");
   }

   else if(A > D && (0 > C || 0 > D)){
      printf("Valores Não Aceitos condições violadas: 2 4");

   }

   else if(soma2 >= soma && (0 > C || 0 > D)){
      printf("Valores Não Aceitos condições violadas: 3 4");

   }

   else if(C > B){
      printf("Valores Não Aceitos condições violadas: 1");
   }

   else if (A > D){
      printf("Valores Não Aceitos condições violadas: 2");
   }

   else if (soma2 > soma){
      printf("Valores Não Aceitos condições violadas: 3");
   }

   else if(0 > C || 0 > D){
      printf("Valores Não Aceitos condições violadas: 4");
   }

 	return 0;
 }
 	
 	

