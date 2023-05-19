// 3. Receber 8 números e armazená-los em um vetor.
//      Ao final, pedir para o usuário escolher uma posição do vetor e exibir o
//      número contido nela.

#include <stdio.h>

int main() {
  int tamanhoArray = 8, entrada, i, display;
  int arrayA[tamanhoArray];

  printf("Escreva  %i numeros\n", tamanhoArray);

  for (i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
  }

  printf("Digite qual posição do array voce quer acessar\n");
  scanf("%i", &display);
  printf("A posição %i vale %i", display, arrayA[display]);

  return 0;
}