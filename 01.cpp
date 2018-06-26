// 1. Ler e armazenar 10 valores inteiros em um vetor e imprimir as            
// 		seguintes informações: soma, média, menor e maior valor. 

#include <stdio.h>

#define MAX 10

int main () {
	int i, vetor[MAX], soma = 0, menor, maior;
	float media = 0;
	
	for (i = 0; i < MAX; i++){
		printf("Informe o numero INTEIRO: ");
		scanf("%d", &vetor[i]);		
	}
	
	menor = vetor [0];
	maior = vetor [0];
	
	for (i = 0; i < MAX; i++){
		soma = soma + vetor[i];
		media = soma / MAX;
		
		if(menor > vetor[i]){
			menor = vetor[i];
		}else if(maior < vetor[i]){
			maior = vetor[i];
		}
	}
	
	printf("Soma: %d\nMedia: %d\nMenor: %d\nMaior: %d", soma, media, menor, maior);
	
	return 0;
}
