// 2. Receber 10 números e armazená-los em um vetor.
// Ao final, exibir os números na ordem inversa da que foram recebidos.

#include <stdio.h>

int main() {
  int tamanhoArray = 10, entrada, i;
  int arrayA[tamanhoArray];

  printf("Escreva  %i numeros\n", tamanhoArray);


  for (i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
  }

  for (i = tamanhoArray - 1; i >= 0; i--) {
    if (i == 0) {
      printf("%.1i\n", arrayA[i]);

    } else {
      printf("%.1i, ", arrayA[i]);
    }
  }

  return 0;
}