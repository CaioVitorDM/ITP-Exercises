#include <stdio.h>

int main(){

int n, i, c, a;
c, a = 1;

scanf("%d", &n);

if (n < 4 ){
    for (i=1; i <= n; i++) {
     
     for(c=1; c <= i; ++c) {
         
         printf(" %d ", a);
         ++a;
         
          
  
        }
    printf("\n");
    }
}

else if (n == 4){
    printf(" 1\n 2  3\n 4  5  6\n 7  8  9 10\n");
}

else if(n > 4){
    printf(" 1\n 2  3\n 4  5  6\n 7  8  9 10\n");
    a = 11;
    for (i=5; i <= n; i++) {
     
     for(c=1; c <= i; ++c) {
         
         printf("%d ", a);
         ++a;
         
          
  
        }
    printf("\n");
    }
}

if(0 >= n){
    printf("Você entrou com %d, tente de novo na próxima", n);
}  




   












return 0;

}
