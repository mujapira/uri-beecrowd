#include <stdio.h>

int main() {
  float entrada, val;

  printf("insira 10 numeros\n");

  for (int i = 0; i < 10; i++) {
    scanf("%f", &entrada);
    val = entrada * 2;
    printf("o dobro de %.2f é: %.2f\n", entrada, val);
  }
  return 0;
}