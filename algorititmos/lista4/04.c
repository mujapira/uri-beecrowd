#include <stdio.h>

int main() {
  float valueA, valueB, valueC;

  printf("Insira tres numeros\n");

  scanf("%f %f %f", &valueA, &valueB, &valueC);

  if (valueA != valueB && valueA != valueC) {
    printf("Não há números repetidos\n");
  } else {
    printf("Há números repetidos\n");
  }
  return 0;
}