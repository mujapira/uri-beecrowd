#include <stdio.h>

int main() {
  float input, storedInput, mediaFinal;
  printf("Media de 10 números\n");

  for (int i = 0; i < 10; i++) {
    scanf("%f", &input);
    storedInput = storedInput + input;
  }
  mediaFinal = storedInput / 10;
  printf("A média é: %.2f", mediaFinal);

  return 0;
}