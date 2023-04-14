#include <stdio.h>

int main() { 
    printf("Função fahrenheit para celcius:\n");
    
    float valorEmF, calc;

    printf("Por favor, digite a temperatura em F\n");
    scanf("%f", &valorEmF);

    calc =  (valorEmF - 32) / 1.80;

    printf("a temperatura em fahrenheit é: %f\n", calc);

    return 0;
}