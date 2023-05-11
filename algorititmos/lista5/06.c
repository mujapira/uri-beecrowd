#include <stdio.h>

int main() {
  float input;
  int positiveCount, negativeCount, safadoCount;
  printf("Digite 10 números e descubra quantos foram positivos e quantos foram negativos\n");

  for (int i = 0; i < 10; i++) {
    scanf("%f", &input);
    if (input > 0) {
      positiveCount = positiveCount + 1;
    
    } else if (input < 0) {
      negativeCount = negativeCount + 1;
    } else {
      printf("nao digite zero seu safado\n");
      safadoCount = safadoCount + 1;
    }
  }

  printf("%i positivos e %i negativos\n", positiveCount, negativeCount);
  if (safadoCount != 0) {
    printf("vc foi safado %i vezes\n", safadoCount);
  }
  return 0;
}