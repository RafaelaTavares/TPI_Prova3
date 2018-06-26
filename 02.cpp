// 2. Ler e armazenar 5 valores inteiros em um vetor e imprimir os valores             
// 		em ordem inversa.

#include <stdio.h>

#define MAX 5

int main () {
	int i, vetor[MAX];
	
	for (i = 0; i < MAX; i++){
		printf("Informe um numero inteiro: ");
		scanf("%d", &vetor[i]);
	}
	
	for (i = MAX - 1; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}
}