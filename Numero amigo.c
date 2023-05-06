#include <stdio.h>
#include <math.h>

int teste_divisor(int numb, int div){
    if(numb % div == 0){
        return 1;
    }
    else {
        return 0;
    }    
}

int soma_divisores(int num){
    int soma = 0;
    for(int i = 1; i < num; i++){
        if(teste_divisor(num, i) == 1){
       soma = soma + i;
        }    
    }
return soma;
        }

    int testa_amigo(int a, int b){
    if((soma_divisores(a) == b  && soma_divisores(b) == a) && (a != b)){
        return 1;
    }    
    else{ 
        return 0;
    }
        }    

int main(){
int n1, n2, n3, n4;
int flag = 0;
scanf("%d %d", &n1, &n2); 
scanf("%d %d", &n3, &n4);

    for(int a = n1; a <= n2; a++)
    for(int b = n3; b <= n4; b++){
            if(testa_amigo(a, b) == 1){
                flag = 1;
                printf("O %d possui um amigo!\n", a);
            }
            }
    
    if(flag == 0) printf("Os intervalos nao apresentam amigos!");   
          
    }