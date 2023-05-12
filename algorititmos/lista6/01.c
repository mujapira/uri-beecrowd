#include <stdio.h>

int main() {
  int i, valor, x;

  printf("Insira um valor de 1 a 20: ");
  scanf("%i", &valor);

  // Primeiro Ponto
  for (x = 0; x <= valor; x++) {
    printf(" ");
  }
  printf("*\n");

  // Cabeçola
  for (i = 0; i < valor - 1; i++) {
    // vazio
    for (x = 0; x < valor - i; x++) {
      printf(" ");
    }

    //corpo
    for (x = 0; x < 3 + i * 2; x++) {
      printf("*");
    }
    printf("\n");
  }

  //* Pau
  for (i = 0; i < valor; i++) {
    for (x = 0; x < valor + 1; x++) {
      printf(" ");
    }
    printf("*\n");
  }

  return 0;
}