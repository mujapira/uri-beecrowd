#include <stdio.h>

int main() {
  float salario, res;

  printf("insira o salario bruto\n");

  scanf("%f", &salario);
  if (salario <= 2750) {
    res = salario * 0.85;
  } else {
    res = salario * 0.75;
  }
  printf("seu salario liquido é de %f\n", res);

  return 0;
}