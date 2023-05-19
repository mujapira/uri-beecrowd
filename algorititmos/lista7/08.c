
// 8. Receber números do usuário para preencher um vetor de 10 posições, porém,
// só é permitido armazenar no vetor números positivos (repetir até que as 10
// posições do vetor estejam preenchidas).
// No final, exiba a soma de todos os números que estão nas posições ímpares
// do vetor.

#include <stdio.h>

int main() {
  int tamanhoArray = 10, entrada = 0, acm;
  int arrayA[tamanhoArray];

  for (int i = 0; i < tamanhoArray; i++) {
    printf("Digite um numero positivo\n");
    scanf("%i", &entrada);

    while (entrada < 0) {
      scanf("%i", &entrada);
    }

    arrayA[i] = entrada;
  }

  for (int i = 0; i < tamanhoArray; i++) {
    if (i % 2 != 0 || i == 1) {
      acm = arrayA[i] + acm;
    }
  }

  printf("%i", acm);

  return 0;
}