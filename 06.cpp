// 6. Ler e armazenar 5 valores char em um (somente um) vetor e imprimir
//        se o vetor lido � um pal�ndromo. Pal�ndromos s�o sequ�ncias de
// 	   s�mbolos, que s�o iguais quando lidas de frente para tr�s e de tr�s  
// 	   para frente. 
// 	   
// 	   Obs.: � necess�rio usar a fun��o fflush(stdin) antes do 
// 	   scanf e fazer include de stdio.h. 

#include <stdio.h>

#define MAX 5

int main () {
	int i; 
	char vetor[MAX];
	
	for(i = 0; i < MAX; i++){
		printf("Informe uma letra: ");
		fflush(stdin);
		scanf("%c", &vetor[i]);
	}	
	
	printf("\n\tVetor Normal: ");
	for(i = 0; i < MAX; i++){
		printf("%c ", vetor[i]);
	}
	
	printf("\n\tVetor De tras pra frente: ");
	for(i = MAX - 1; i >= 0; i--){
		printf("%c ", vetor[i]);
	}
	
	if((vetor[0] == vetor[4]) && (vetor[1] == vetor[3])){
        printf("\n\nO vetor lido eh um Polidromo!\n");
	}else {
		printf("\n\nO vetor lido nao eh um Polidromo!\n");
	}
	
}