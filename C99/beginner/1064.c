#include <stdio.h>

int main() {
  int loopCount, counter = 0;
  float inputSum = 0, average = 0, input = 0;

  for (loopCount = 0; loopCount < 6; loopCount++) {
    scanf("%f", &input);

    if (input > 0) {
      counter = counter + 1;
      inputSum = inputSum + input;
    }
  }

  average = inputSum / counter;
  printf("%d valores positivos\n", counter);
  printf("%.1f\n", average);

  return 0;
}