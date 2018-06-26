// 8. Ler um vetor de char (10 elementos) e mostrar a quantidade de
// 		elementos de cada vogal. 

#include <stdio.h>

#define MAX 10

int main() {
	char Vetor[MAX];
	int j;
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int outras = 0;
	
	for(j = 0; j < MAX; j++){
		printf("Informe o %do elemento do vetor: ", j+1);
		fflush(stdin);
		scanf("%c", &Vetor[j]);
	}
	
	for(j = 0; j < MAX; j++){
		switch(Vetor[j]){			
			case 'a':
			case 'A':
				a++;
			break;
		
			case 'e':
			case 'E':
				e++;
			break;
			
			case 'i':
			case 'I':
				i++;
			break;
		
			case 'o':
			case 'O':
				o++;
			break;
		
			case 'u':
			case 'U':
				u++;
			break;	
		}
	}
	
	printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", a, e, i, o, u);
	
}