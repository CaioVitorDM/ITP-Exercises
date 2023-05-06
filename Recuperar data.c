#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int read_line(char linha[], int tam, FILE* f){
    fgets(linha, tam, f);
    while(linha[0] == '\n')
        fgets(linha, tam, f);
    if(linha[strlen(linha)-1] == '\n')
        linha[strlen(linha)-1]='\0';
return 1;
  }


void troca_por_barra(char vetor_2[3]){
  int cont = 0;
  for (int i=0;i<3;i++){
    if (vetor_2[i] == '-'){
      vetor_2[i] = '/';
    }
  }  
}


void recebe_organiza(int *dia,int *mes,int *ano,char vetor[],char vetor_2[],int *con){
  if (vetor[0] == 'F' && vetor[1] == 'I' && vetor[2] == 'M' && vetor[3] == '\0'){
    *con = 2;
    return;
  }
    int r = sscanf(vetor,"%d%c%d%c%d", dia, &vetor_2[0], mes, &vetor_2[1], ano);
    if(r == EOF){
      *con = 1;
      return;
    }
    else if (r == 5){
      if (1 <= *dia && *dia <= 31){
      *con = 0;    
    }
    else if (1<=*mes && *mes<=12){
      *con = 0;
    }
    else if (vetor[1] == '-' || vetor[1] == '/' || vetor[0] == '-' || vetor[0] == '/'){
      *con = 0;
          
    }
      else {
        *con =1;
        return;      
          
      }
    }
    else{
        *con =1;    
        return;
    }

    troca_por_barra(vetor_2);
}
int main(){ 
  int tam = 12;
  int x = 0;
  int dia, mes, ano, *pont_dia, *pont_mes, *pont_ano, con, *pont_con = 0;
  pont_dia = &dia;
  pont_mes = &mes;
  pont_ano = &ano;
  pont_con = &con;
  char string2[3];
  char string[tam];
  while(read_line(string, tam, stdin)){
    recebe_organiza(pont_dia, pont_mes, pont_ano, string, string2, pont_con);
    if(con == 1){
      printf("INVALIDO!\n");
      continue;      
    }
    else if(con == 2){
      break;
    } 
    else {
      if((1 <= dia && dia <= 9) && (1 <= mes && mes <= 9)){
        printf("%02d%c%02d%c%d\n", dia, string2[0], mes, string2[1], ano);  
      }
      else if(1<=dia&&dia<=9&&mes>=10){
        printf("%02d%c%d%c%d\n", dia, string2[0], mes, string2[1], ano);
      }
      else if(1<=mes&&mes<=9&&dia>=10){
        printf("%d%c%02d%c%d\n", dia, string2[0], mes, string2[1], ano);
      }
      else{
        printf("%d%c%d%c%d\n", dia, string2[0], mes, string2[1], ano);
      }
    }
    
  };
 
 

}