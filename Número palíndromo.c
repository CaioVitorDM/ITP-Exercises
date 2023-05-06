#include <stdio.h>

int main(){
  int n, aux, rev;

  scanf("%d", &n);

  aux = n;
  rev = 0;

  while(aux != 0){
    rev = rev * 10 + aux % 10;
    aux = aux / 10;
  }

  if(n == rev && (n % 2) == 0){
    printf("%d é Palíndromo e par.", n);
}
  else if(n == rev && (n % 2) != 0){
    printf("%d é Palíndromo e ímpar.", n);
  }
  
  else if(n != rev && (n % 2) == 0){
      printf("%d não é Palíndromo e par.", n);
  }
  
  else if(n != rev && (n % 2) != 0){
      printf("%d não é Palíndromo e impar.", n);
  }

  
  
  return 0;
  }