#include <stdio.h>

int main() {
  float int1, int2, valor;

  do {

    if (int1 > 0) {
      printf("Digite o primeiro valor:");
      scanf("%f", &int1);
    } else {
      printf("Digite um valor positivo:");
      scanf("%f", &int1);
    }
    
  } while (int1 < 0);

  return 0;
}