#include <stdio.h>
 
int main() { 
    float a, c, b;
    float triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%f %f %f", &a, &b, &c);

    triangulo = a * c / 2.0;
    circulo = 3.14159 * (c * c);
    trapezio = ((a + b) * c) / 2.0;
    quadrado = b * b;
    retangulo = a * b;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}