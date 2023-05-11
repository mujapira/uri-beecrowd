#include <stdio.h>

int main() {
  float input, maior, menor;
  int i = 0;
  printf("Digite 10 números e descubra qual é o maior e o menor \n");

  for (i = 0; i < 10; i++) {
    scanf("%f", &input);

    if (i == 0) {
      maior = input;
      menor = input;
    } else {
      if (input > maior) {
        maior = input;
      }

      if (input < menor) {
        menor = input;
      }
    }
  }

  printf("maior é %.2f, menor é %.2f\n", maior, menor);

  return 0;
}