#include <stdio.h>
 
int main() {
    printf("Função salario encanador\n");

    float salario, diasTrabalhados;

    printf("Por favor, digite quantos dias foram trabalhados:\n");
    scanf("%f", &diasTrabalhados);

    salario = 35 * 0.92 * diasTrabalhados;

    printf("salario total: %f\n", salario);

    return 0;
}
