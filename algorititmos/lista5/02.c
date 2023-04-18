#include <stdio.h>

int main() {
  float entrada;
  printf("receba um número e descubra se ele é positivo, negativo ou nulo 10 vezes\n");

  for (int i = 0; i < 10; i++) {
    scanf("%f", &entrada);
    if (entrada < 0) {
      printf("o valor %.2f é negativo\n", entrada);
    } else if (entrada > 0){
      printf("o valor %.2f é positivo\n", entrada);
    } else {
      printf("o valor %.2f é nulo\n", entrada);
    }
  }

  return 0;
}