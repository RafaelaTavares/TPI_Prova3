// 11. (COMP 89) Dados dois vetores de char (um contendo uma frase e            
// 		outro contendo uma palavra), determine o número de vezes que a           
// 		palavra ocorre na frase (ou seja, o número de vezes que o segundo             
// 		vetor ocorre no primeiro). Exemplo: Para a palavra ANA e a 
// 		frase: ANA E MARIANA GOSTAM DE BANANA - Temos que a palavra ANA ocorre 
// 		4 vezes na frase.  

#include <stdio.h>

#define MAX 1000

int main() {
	char vetorA[MAX], vetorB[MAX];
	int i, cont = 0;
	
	printf("Informe a palavra: ");
	gets(vetorA);
	printf("Informe a frase: ");
	gets(vetorB);
	
	printf("\n\nPalavra Lida: %s\tFrase lida: %s", vetorA, vetorB);
	printf("\n\nNumero de vezes que a palavra '%s' Aparece na Frase '%s'\n", vetorA, vetorB);
	
	for(i = 0; i < MAX; i++){
		if(vetorA[i] == vetorB[i]){
			cont = cont + 1;
		}
		if(vetorB == '\0'){
			break;
		}
		printf("%c", vetorB[i]);
	}
}