#include <stdio.h>

int main() {
  float num1, num2, maior;

  printf("insira dois numeros\n");

  scanf("%f %f", &num1, &num2);

  if (num1 > num2) {
    maior = num1;
  } else {
    maior = num2;
  }
  printf("o maior é %f\n", maior);

  return 0;
}