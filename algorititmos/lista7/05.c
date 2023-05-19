// 5. Receber 12 números e armazená-los em um vetor.
//     Ao final, exibir quais foram os números positivos informados.

#include <stdio.h>

int main() {
  int tamanhoArray = 12, entrada, i, contador = 0;
  int arrayA[tamanhoArray];

  printf("Escreva  %i numeros\n", tamanhoArray);

  for (i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
    if (entrada > 0) {
      arrayA[contador] = entrada;
      contador = contador + 1;
    }
  }

  for (int j = 0; j < contador; j++) {
    if (j == contador - 1) {
      printf("%i", arrayA[j]);
    } else {
      printf("%i, ", arrayA[j]);
    }
  }

  return 0;
}