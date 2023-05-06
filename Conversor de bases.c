#include <stdio.h>

int converter (int numb, int base){
  int resultado = 0, aux = numb;
  int mul = 1;
  while (aux > 0){
    resultado = resultado + (aux % base) * mul;
    mul = mul * 10;
    aux /= base;

  }
  return resultado;
}

int main(){

int numb, base, resultado;

do{
  scanf("%d", &numb);
  if(numb <= -1){
    printf("Programa Encerrado!");
  }
  else{
    scanf("%d", &base);
   
    printf("Numero %d(10) na base %d = %d(%d)\n", numb, base, converter(numb, base), base);
  }

}while(numb != -1);

}