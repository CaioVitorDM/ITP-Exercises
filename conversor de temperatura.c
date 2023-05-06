#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

   char escala, escala2, para;
   float temperatura; 
   
  
   scanf("%f", &temperatura);
   scanf("%c", &escala);
   scanf("%c", &escala);
   scanf("%c", &para);
   scanf("%c", &para);
   scanf("%c", &escala2);
   scanf("%c", &escala2);


   

   
   if (escala == 'C' && para == '>' && escala2 == 'F'){
      float resultado = temperatura * 1.8 + 32;
      printf("%.2lf F", resultado);

   }
      

   if (escala == 'C' && para == '>' && escala2 == 'K'){
      float resultado = temperatura + 273.15;
      printf("%.2lf K", resultado);

   }

   if (escala == 'F' && para == '>' && escala2 == 'C'){
      float resultado = (temperatura - 32) / 1.8;
      printf("%.2lf C", resultado);
   }

   if (escala == 'F' && para == '>' && escala2 == 'K'){
      float celsius = (temperatura - 32) / 1.8;
      float resultado = celsius + 273.15;
      printf("%.2lf K", resultado);
   }

   if (escala == 'K' && para == '>' && escala2 == 'C'){
      float resultado = temperatura - 273.15;
      printf("%.2lf C", resultado);
   }
   
   if (escala == 'K' && para == '>' && escala2 == 'F'){
      float celsius = temperatura - 273.15;
      float resultado = celsius * 1.8 + 32;
      printf("%.2lf F", resultado);
   }

   

return 0;
}