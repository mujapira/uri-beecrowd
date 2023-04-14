#include <stdio.h>

int main() {
  float input, sal, res, increase;
  scanf("%f", &input);

  if (input <= 400) {
    increase = 0.15;
  }

  else if (input <= 800) {
    increase = 0.12;
  }

  else if (input <= 1200) {
    increase = 0.10;
  }

  else if (input <= 2000) {
    increase = 0.07;
  }

  else if (input > 2000) {
    increase = 0.04;
  }
  res = (input * increase) + input;

  printf("Novo salario: %.2f\n", res);

  res = res - input;
  printf("Reajuste ganho: %.2f\n", res);

  res = increase * 100;
  printf("Em percentual: %.0f %%\n", res);

  return 0;
}