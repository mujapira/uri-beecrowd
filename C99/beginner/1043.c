#include <stdio.h>

int main() {
  float a, b, c, area, perimetro;

  // para verificar se um triangulo é válido
  // a soma de dois lados tem que ser maior
  // que o terceiro lado para todos os lados

  scanf("%f %f %f", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {
    perimetro = a + b + c;
    printf("Perimetro = %.1f\n", perimetro);
  } else {
    area = ((a + b) * c) / 2.0;
    printf("Area = %.1f\n", area);
  }
  return 0;
}