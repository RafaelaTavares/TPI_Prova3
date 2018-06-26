// 4. Utilizando os 2 vetores (de 5 posições) da questão anterior, criar um            
// 		terceiro vetor com 10 posições para armazenar o resultado e depois           
// 		imprimir o vetor final

#include <stdio.h>

#define MAX 5


int main () {
	int i, j, vetor1[MAX], vetor2[MAX], vetor3[MAX*2];
	
    // ADICIONADO NUMERO NO VETOR 1
	for (i = 0; i < MAX; i++){
		printf("Informe valor do vetor 1: ");
		scanf("%d", &vetor1[i]);
	}
	printf("\n");
	
	// ADICIONANDO NUMERO NO VETOR 2
	for (i = 0; i < MAX; i++){
		printf("Informe valor do vetor 2: ");
		scanf("%d", &vetor2[i]);
	}
	printf("\n\n");
	
	// COLOCANDO OS NUMEROS DO VETOR 1 NO VETOR 3
	for(i = 0, j = 0; i < MAX*2; i++, j++){
		vetor3[i] = vetor1[j];
		i = i + 1;
	}
	
	// COLOCANDO OS NUMERO DO VETOR 2 NO VETOR 3
	for(i = 1, j = 0; i < MAX*2; i++, j++){
		vetor3[i] = vetor2[j];
		i = i + 1;
	}
	
	// IMPRIMINDO VETOR 3
	for (i = 0; i < MAX*2; i++){
		printf("%d ", vetor3[i]);
	}
}