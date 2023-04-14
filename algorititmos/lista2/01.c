#include <stdio.h>
#include <math.h>
 
int main() {
    printf("Função calcular raiz e potencia:\n");

    double valor, raiz, potencia;

    printf("digite um numero:\n");

    scanf("%lf", &valor);

	raiz = sqrt(valor);
    potencia = pow(valor, 8.0);

    printf("A raiz quadrada é: %.4lf\n", raiz);
    printf("A oitava potencia é: %.4lf\n", potencia);

    return 0;
}
