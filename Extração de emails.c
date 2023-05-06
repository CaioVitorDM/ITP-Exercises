#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Função para ler as strings
void read_line(char linha[], int tam, FILE* f){
    fgets(linha, tam, f);
    while(linha[0] == '\n')
        fgets(linha, tam, f);
    if(linha[strlen(linha)-1] == '\n')
        linha[strlen(linha)-1]='\0';

} 

//Função para achar o arroba
void achar_arroba(int tam, char string[tam], int *arroba, int *ponto){
  int i;
  int cont = 0;
  for(i = 0; i < 50; i++){
    if(string[i] == '@'){
      *arroba = i;
      cont = 1;
    }
    if(cont == 1){
      if(string[i] == '.'){
        *ponto = i;
        break;
      }
    }
  }
}





int main(void) {
  
int tam = 50;
int condicao = 1;
int arroba, ponto, *pont_arro, *pont_ponto, j;
pont_arro = &arroba;
pont_ponto = &ponto;
char fim[3] = "FIM";
char email[tam];

while(condicao != 0){
  read_line(email, tam, stdin);
  condicao = strcmp(fim, email);
  if(condicao == 0){
    break;
  }
  achar_arroba(tam, email, pont_arro, pont_ponto);
  for(j = *pont_arro + 1; j < *pont_ponto; j++){
    printf("%c", email[j]);
  }
  printf("\n");
}
  
  
  return 0;
}