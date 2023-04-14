#include <stdio.h>
 
int main() { 
    float numero, calc;
    printf("Função dobrar número: \n");
	
    scanf("%f", &numero);

    calc = numero * 2;

    printf("O dobro do número é: %f\n", calc);

    return 0;
}