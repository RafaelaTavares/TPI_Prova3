// 5. Dados um vetor de inteiros de 10 posições e um valor inteiro lidos do              
// teclado, determine o número de vezes que o número inteiro ocorre no vetor.  

#include <stdio.h>

#define MAX 5 

int main () {
 	int i, num, cont = 0, vetor[MAX];
 	
//  	ADICIONANDO ELEMENTOS NO VETOR
 	for(i = 0; i < MAX; i++){
		 printf("Informe o %do elemento do vetor: ", i+1);
		 scanf("%d", &vetor[i]);
    }
    
//  	IMPRIMINDO VETOR
    printf("\n\tVETOR: ");
    for(i = 0; i < MAX; i++){
    	printf("%d ", vetor[i]);
	}
    
//  	INFRMANDO NUMERO PARA VER SE REPETE NO VETOR
    printf("\n\nInforme um numero para ver quanats vezes ele se repete no vetor: ");
    scanf("%d", &num);
    
// 		VERIFICANDO QUANTAS VEZES O NUMERO INFORMADO SE REPETE
	for(i = 0; i < MAX; i++){
		if(num == vetor[i]){
			cont = cont + 1;
		}
	}
	
// 		IMPRIMINDO QUANTAS VEZES O NUMERO INFORMADO SE REPETE
	printf("\n\nO numero %d aparece %d vezes no vetor\n", num, cont);	
}