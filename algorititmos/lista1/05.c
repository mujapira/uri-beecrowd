#include <stdio.h>

int main() { 
    printf("Função divisão e resto:\n");
    
    int numerador, denominador, calcDivisao, calcResto;

    printf("Por favor, digite o numerador (parte superior da fração)\n");
    scanf("%d", &numerador);

    printf("Por favor, digite o denominador (parte inferior da fração)\n");
    scanf("%d", &denominador);

    calcDivisao =  (numerador / denominador);

    calcResto = numerador % denominador;

    printf("o valor da divisão é: %d\n", calcDivisao);
    printf("o resto da divisão é: %d\n", calcResto);

    return 0;
}