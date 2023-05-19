// 10. Receber 10 números e armazená-los em um vetor. Copiar os números em outro
// vetor na ordem inversa e mostrar na tela todas as posições em que se tem o
// mesmo número nos dois vetores.

#include <stdio.h>

int main() {
  int tamanhoArray = 10, entrada = 0, contador = tamanhoArray - 1;
  int arrayA[tamanhoArray];
  int arrayReverso[tamanhoArray];

    printf("Digite %i numero(s)\n", tamanhoArray);

  for (int i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
  }

  for (int i = 0; i < tamanhoArray; i++) {
    arrayReverso[contador] = arrayA[i];
    contador = contador - 1;
  }

  for (int i = 0; i < tamanhoArray; i++) {
    if (arrayReverso[i] == arrayA[i]) {
      printf("Há numero repetido na posição %i\n", i);
    }
  }

  return 0;
}