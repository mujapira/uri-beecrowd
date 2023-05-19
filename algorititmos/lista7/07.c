
// 7. Preencher automaticamente um vetor com todos os números pares entre 1 e
// 100 e depois exibir os números para o usuário.

#include <stdio.h>

int main() {
  int tamanhoArray = 49, contador = 0;
  int arrayA[tamanhoArray];

  for (int i = 2; i < 100; i = i + 2) {
    arrayA[contador] = i;
    contador = contador + 1;
  }

  for (int i = 0; i < tamanhoArray; i++) {
    if (i == tamanhoArray - 1) {
      printf("%i", arrayA[i]);

    } else {
      printf("%i, ", arrayA[i]);
    }
  }

  return 0;
}