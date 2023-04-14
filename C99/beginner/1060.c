#include <stdio.h>

int main() {
  float input;
  int valoresPositivos;
  for (int i = 0; i <= 5; ++i) {
    scanf("%f", &input);

    if (input > 0) {
      valoresPositivos++;
    }
  }
  printf("%i valores positivos\n", valoresPositivos);

  return 0;
}