// 1. Criar um programa que exibe todos os números pares 
//de 0 a 100 utilizando while.

#include <stdio.h>

int main() {
  int counter = 0;
  
  // comando responsável por iniciar o processo de repetiçao
  do {
    printf("%i\n", counter);
    counter = counter + 2;

  // condição que quando satisfeita, quebra o processo de repetir
  } while (counter < 101);

  return 0;
}