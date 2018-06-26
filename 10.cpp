// 10. Dado dois vetores, A (4 elementos) e B (6 elementos), faça um            
// 	programa em C que imprima todos os elementos comuns aos dois vetores.

#include <stdio.h>

int main() {
	int vetorA[4], vetorB[6];
	int i,j;
	
	for(i = 0; i < 4; i++){
		printf("Informe o %do elemento do vetor A: ", i+1);
		scanf("%d", &vetorA[i]);
	}
	printf("\n");
	for(i = 0; i < 6; i++){
		printf("Informe o %do elemento do vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
	}
	
	printf("\n\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 6; j++){
			if(vetorA[i] == vetorB[j]){
				printf("%d ", vetorB[j]);
			}
		}
	}
}