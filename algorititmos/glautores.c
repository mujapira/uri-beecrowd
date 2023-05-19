#include <stdio.h>

int main() {
  int tamanhoArray = 10, entrada, contador = 0;
  int arrayA[tamanhoArray], arrayB[tamanhoArray];

  printf("Escreva 10 numeros\n");
  for (int i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
  }

  printf("Escreva 10 numeros novamente\n");
  for (int j = 0; j < tamanhoArray; j++) {
    scanf("%i", &entrada);
    arrayB[j] = entrada;
  }

  for (int k = 0; k < tamanhoArray; k++) {
    if (arrayA[k] == arrayB[k]) {
      contador = contador + 1;
    }
  }

  printf("%.1i valores se repetem na mesma posição", contador);
  return 0;
}