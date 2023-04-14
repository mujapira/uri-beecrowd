#include <stdio.h>

int main() {
  float input, inputAnterior, maior, menor;
  printf("Digite 10 números e descubra qual é o maior e o menor \n");

  for (int i = 0; i < 10; i++) {
    scanf("%f", &input);
    if (input > inputAnterior) {
      maior = input;
    } else if (input < inputAnterior) {
      menor = input;
    } else {
      menor = input;
      maior = input;
    }
    inputAnterior = input;
  }
  printf("maior é %.2f, menor é %.2f\n", maior, menor);

  return 0;
}