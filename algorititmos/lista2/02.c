#include <stdio.h>
 
int main() {
    printf("Função consumo médio:\n");

    float distancia, combustivelGasto, calc;

    printf("Por favor, digite a distancia percorrida:\n");
    scanf("%f", &distancia);

    printf("Por favor, digite o combustivel gasto:\n");
    scanf("%f", &combustivelGasto);

    calc = distancia / combustivelGasto;

    printf("consumo medio: %f\n", calc);

    return 0;
}
