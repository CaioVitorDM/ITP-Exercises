#include <stdio.h>
#include <math.h>

int main(){
    int i, nota;
    float mediaA, mediaH, mediaG, media, Har, geo, erro_h, erro_g, erro_m, final_m;
    media, mediaA, mediaH = 0;
    mediaG = 1.0;
    for (i =1; i<=10; i++){
        scanf("%d", &nota);
        media += nota;
        mediaH += (1.0/nota);
        mediaG = mediaG * nota;
    
        
    }
    
    geo = pow (mediaG, 1.0/10);
    Har = 10/mediaH;
    mediaA = media/10;
    
    erro_h = (Har - mediaA) / mediaA;
    erro_g = (geo - mediaA) / mediaA;
    erro_m = ((erro_h + erro_g) / 2.0) * 100;
    
    
    

    printf("Média aritmética é %.2f\n", mediaA);
    printf("Média harmônica é %.2f\n", Har);
    printf("Média geométrica é %.2f\n", geo);
    printf("Erro médio é %.2f %\n", erro_m);








    return 0;
}