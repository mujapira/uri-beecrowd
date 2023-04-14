#include <stdio.h>

int main() {
  float entrada;

  printf("insira um número e descubra se ele é positivo ou negativo\n");

  scanf("%f", &entrada);
  if (entrada > 0) {
    printf("valor positivo");
  } else if (entrada < 0) {
    printf("valor negativo");
  } else {
    printf("zero não é positivo nem negativo");
  }
  
  return 0;
}