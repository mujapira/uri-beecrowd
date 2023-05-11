//2. Criar um programa que exibe todos os números 
//ímpares de 0 a 100 utilizando do-while.
#include <stdio.h>

int main() {
  int counter = 1;
  
  do {
    printf("%i\n", counter);
    counter = counter + 2;

  } while (counter < 100);

  return 0;
}