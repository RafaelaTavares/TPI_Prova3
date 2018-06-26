// 7. Ler dois vetores 5 de números inteiros ordenados de forma crescente
//      e armazenar os valores dos dois vetores de forma ordenada em um 
// 	    terceiro vetor. Imprimir o terceiro vetor.

#include <stdio.h>

#define MAX 5

int main() {
	int vetor1[MAX], vetor2[MAX], vetor3[MAX*2];
	int i, j, cont, aux;
	
	for(i = 0; i < MAX; i++){
		printf("Informe o %do elemento do vetor 1: ", i+1);
		scanf("%d", &vetor1[i]);
	}
	printf("\n");
	
	for(i = 0; i < MAX; i++){
		printf("Informe o %do elemento do vetor 2: ", i+1);
		scanf("%d", &vetor2[i]);
	}
	printf("\n");
	
	for(i = 0; i < MAX; i++){
		vetor3[i] = vetor1[i];				
	}
	
	cont = MAX;;
	for(i = 0; i < MAX; i++){
		vetor3[cont] = vetor2[i];
		cont++;
	}
	
	printf("\n\n");
	for(i = 0; i < MAX*2; i++){
		for(j = 0; j < MAX*2; j++){
			if(vetor3[i] < vetor3[j]){
				aux = vetor3[i];
				vetor3[i] = vetor3[j];
				vetor3[j] = aux;
			}
		}
	}	
	
	printf("\n\n");
	for(i = 0; i < MAX*2; i++){
		printf("%d ", vetor3[i]);
	}
}