// 9. Ler um vetor de 10 elementos e imprimir a quantidade de valores que 
//             existe para cada elemento distinto do vetor.

#include <stdio.h>

#define MAX 4

int main(){
	int vetor[MAX], i, j, contt = 0, cont = 1;
	
	for(i = 0; i < MAX; i++){
		printf("Informe o %do elemento do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < MAX; i++){
		for(j = 1; j < MAX; j++){
			if(vetor[i] == vetor[j]){
				cont++;
			}else{
				contt = 1;
			}
		}
		printf("O elemento na posicao %d aparece %d vezes no vetor\n", i+1, cont);			
	}
}