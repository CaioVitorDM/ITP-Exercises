#include <stdio.h>

int main(){
int n, i, j, k, l, t;
int tam_t = 0;
scanf("%d", &n);
if(n <= 10){
int vetor_a[n], vetor_b[n], soma_t[n];
    for(i = 0; i < n; i++){
        scanf("%d", &vetor_a[i]);
    }

    for(j = 0; j < n; j++){
        scanf("%d", &vetor_b[j]);
    }
    
    for(k = 0; k < n; k++){
        soma_t[k] = vetor_a[k] + vetor_b[k];
        t++;
        tam_t = t;
    }
    
    for(l = 0; l < n; l++){
        printf("%d", soma_t[l]);
         if (t == tam_t - 1){
            break;
        }
        else{
        printf(" ");
        }
    }

    

}

else{
    printf("Muitos elementos");
}


    return 0;
}