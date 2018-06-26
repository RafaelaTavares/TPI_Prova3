// 3. Ler e armazenar 5 valores inteiros em dois vetores e imprimir os            
// 		valores de forma intercalada, ou seja, 1o elemento do vetor1, 1o          
//  	 elemento do vetor2, 2o elemento do vetor1, 2o elemento do vetor2,etc

#include <stdio.h>

#define MAX 5

int main () {
	int i, vetor1[MAX], vetor2[MAX];
	
	for (i = 0; i < MAX; i++){
		printf("Informe valor do vetor 1: ");
		scanf("%d", &vetor1[i]);
	}
	printf("\n");
	
	for (i = 0; i < MAX; i++){
		printf("Informe valor do vetor 2: ");
		scanf("%d", &vetor2[i]);
	}
	printf("\n\n");
	
	for (i = 0; i < MAX; i++){
		printf("V1: %d, V2: %d, ", vetor1[i], vetor2[i]);
	}
}