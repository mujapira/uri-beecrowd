// 4. Receber 15 números e armazená-los em um vetor.
//     Ao final, exibir o dobro de cada um dos números.

#include <stdio.h>

int main() {
  int tamanhoArray = 15, entrada, i, display;
  int arrayA[tamanhoArray];

  printf("Escreva  %i numeros\n", tamanhoArray);

  for (i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
  }

  for (i = 0; i < tamanhoArray; i++) {
    if (i == tamanhoArray - 1) {
      printf("%i", arrayA[i] * 2);
    } else {
      printf("%i, ", arrayA[i] * 2);
    }
  }
  
  return 0;
}