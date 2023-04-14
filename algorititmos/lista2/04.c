#include <stdio.h>
 
int main() {
    printf("Função salario\n");

    float salario, horas, horasExtras;

    printf("Por favor, digite suas horas normais:\n");
    scanf("%f", &horas);

    printf("Por favor, digite suas horas extras:\n");
    scanf("%f", &horasExtras);

    salario = horas * 10.0 + horasExtras * 15.0;

    printf("salario total: %f\n", salario);

    return 0;
}
