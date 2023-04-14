#include <stdio.h>

int main() { 
    float val1, val2, calc;
    printf("Função média entre dois números: \n");
	
    scanf("%f %f", &val1, &val2);

    calc =  (val1 + val2) / 2;

    printf("A média entre dois valores é: %f\n", calc);

    return 0;
}