#include <stdio.h>

int main(){
	
	int i, valor, x;	
	
	printf("Insira um valor de 1 a 10: ");
	scanf("%i", &valor);
	
	//Parte de cima
	for(i = 0; i < valor * 2; i++){
		printf("*");
	}
	
	printf("\n");
	
	for(i = 0; i < valor * 2 - 2; i++){
		printf("*");
		for(x = 0; x < valor * 2 - 2; x++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	
	//Parte de baixo
	for(i = 0; i < valor * 2; i++){
		printf("*");
	}
	
	return 0;
}