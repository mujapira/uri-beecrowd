
// 6. Receber 12 números e armazená-los em um vetor.
//     Ao final, exibir a quantidade de números negativos informados.

#include <stdio.h>

int main() {
  int tamanhoArray = 12, entrada, i, contador = 0;
  int arrayA[tamanhoArray];

  printf("Escreva  %i numeros\n", tamanhoArray);

  for (i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
    if (entrada < 0) {
      arrayA[contador] = entrada;
      contador = contador + 1;
    }
  }

  printf("%i numeros negativos\n", contador);

  return 0;
}