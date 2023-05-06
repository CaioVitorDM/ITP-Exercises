#include <stdio.h>
#include <stdlib.h>

float* vet_distinto(float *g, int tam, int *h){
    
    float *vetor_final = malloc(1 * sizeof(float));
    for(int i = 0; i < tam; i++){
        int contador_iguais = 0;
        for(int j = 0; j < tam; j++){
            if(g[i] == g[j]){
                contador_iguais++;        
            }
        }
        if(contador_iguais == 1){
            vetor_final[(*h)++] = g[i];
            vetor_final = realloc(vetor_final, ((*h) + 1) * sizeof(float));
        }
    }
    return vetor_final;
}

int leitura_vetor(int tam, float vetor[tam]){
    for(int i = 0; i < tam; i++){
        scanf("%f", &vetor[i]);
    }
}

int main(){
    int numb, *t, tam_novo = 0;
    t = &tam_novo;
    float *refe;
    scanf("%d", &numb);
    refe = malloc(numb * sizeof(float));
    leitura_vetor(numb, refe);
    float *vetor_final = malloc(1 * sizeof(float));
    vetor_final = vet_distinto(refe, numb, t);
    printf("[");
    for(int i = 0; i < *t; i++){
        (i == 0) ?  printf("%.4f", vetor_final[i]) :  printf(", %.4f", vetor_final[i]);
       
    }

    printf("]");
    free(refe);
    free(vetor_final);
}
