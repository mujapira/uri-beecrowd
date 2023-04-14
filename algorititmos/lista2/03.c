#include <stdio.h>
 
int main() {
    printf("Função velocidade média\n");

    float distancia, tempo, calc;

    printf("Por favor, digite a distancia:\n");
    scanf("%f", &distancia);

    printf("Por favor, digite o tempo gasto:\n");
    scanf("%f", &tempo);

    calc = distancia / tempo;

    printf("velocidade média: %f\n", calc);

    return 0;
}
