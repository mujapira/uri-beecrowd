#include <stdio.h>
 
int main() { 
    float base, altura;
    float areaTriangulo;

    printf("Função calcular area de triangulo retangulo:\n");

    printf("Por favor, digite a base\n");
    scanf("%f", &base);
    printf("Por favor, digite a altura\n");
    scanf("%f", &altura);

    areaTriangulo = base * altura / 2.0;

    printf("A area do triangulo é: %f\n", areaTriangulo);

    return 0;
}