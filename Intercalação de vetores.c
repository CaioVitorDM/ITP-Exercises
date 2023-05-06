#include <stdio.h>


int main(){

int i, j, a, b, t, k, l, m, r, s, q, u;
int tam_s, tam_a, tam_b = 0;

scanf("%d", &a);
int vetor_a[a];
for(i = 0; i < a; i++){
	scanf("%d", &vetor_a[i]);
}



scanf("%d", &b);
int vetor_b[b];
for(j = 0; j < b; j++){
	scanf("%d", &vetor_b[j]);
}


int ts = a + b;
int result[ts];

if(a == b){
	int n = 1;
	int o = 0;
	for(k = 0; k < a; k++){
		result[o] = vetor_a[k];
		o += 2;
	}

	for(l = 0; l < b; l++){
			result[n] = vetor_b[l];
			n += 2;
		}

	}
}


if(a > b){
	int n = 1;
	int o = 0;
	for(r = 0; r < a; a++){
		for(k = 0; k < a; k++){
		result[o] = vetor_a[k];
		o += 2;
		q++;
		tam_a = q
		}
	if(q == tam_a - 1){
		for(k; k < a; k++){
		result[o] = vetor_a[k];
		o++;
		}
	}

	else{
		for(l = 0; l < b; l++){
			result[n] = vetor_b[l];
			n += 2;
		}
	}
		
	}
}




	












for(m = 0; m < ts; m++){
	printf("%d", result[m]);
	if (t == tam_s - 1){
     	break;
    }
    else{
   		printf(" ");
    }
}


	return 0;
}