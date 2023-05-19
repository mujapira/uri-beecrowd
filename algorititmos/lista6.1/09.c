// 9. Receber 10 números e armazená-los em um vetor.
//     Após esta primeira etapa é necessário pedir para o usuário digitar um
//     número. Verificar se este número está armazenado no vetor e se estiver
//     mostrar quantas vezes o número esta armazenado no vetor, ou seja, quantas
//     vezes o número se repete.
//      Se o número não estiver no vetor, uma mensagem deve indicar esta
//      condição e deverá ser solicitado um novo número para o usuário.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanhoArray = 10, entrada = 0, contador = 0;
  int arrayA[tamanhoArray];

  printf("Escreva  %i numeros\n", tamanhoArray);

  for (int i = 0; i < tamanhoArray; i++) {
    scanf("%i", &entrada);
    arrayA[i] = entrada;
  }
  system("clear");

  printf("Digite um numero\n");
  scanf("%i", &entrada);

  for (int i = 0; i < tamanhoArray; i++) {
    if (entrada == arrayA[i]) {
      contador = contador + 1;
    }
  }

  while (contador == 0) {
    system("clear");

    printf("O numero digitado não existe, digite um novo\n");
    scanf("%i", &entrada);

    for (int i = 0; i < tamanhoArray; i++) {
      if (entrada == arrayA[i]) {
        contador = contador + 1;
      }
    }
  }

  printf("O numero se repetiu %i veze(s)\n", contador);

  return 0;
}