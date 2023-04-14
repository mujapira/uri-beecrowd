#include <stdio.h>

int main() { 
    printf("Função metros para centímetros:\n");
    
    double val1, calc;
	
    scanf("%lf", &val1);

    calc =  (val1 * 100);

    printf("o valor entre centímetros é: %lf\n", calc);

    return 0;
}