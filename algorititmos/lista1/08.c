#include <stdio.h>

int main() { 
    printf("Função calcular perimetro de circunferencia:\n");
    
    float raio, calc;

    printf("Por favor, digite o raio\n");
    scanf("%f", &raio);

    calc = 3.14 * 2 * raio;

    printf("O perimetro é: %f\n", calc);

    return 0;
}