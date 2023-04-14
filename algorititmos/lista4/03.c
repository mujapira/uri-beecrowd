#include <stdio.h>

int main() {
  float kilos, metros, res;

  printf("Vamos calcular seu IMC\n");
  printf("Digite sua massa em Kilos e sua altura em metros\n");

  scanf("%f %f", &kilos, &metros);
  res = kilos / (metros * metros);

  // printf("imc: %f\n", res);

  if (res >= 40) {
    printf("Obesidade grau 3\n");
  } else if (res >= 35) {
    printf("Obesidade grau 2\n");
  } else if (res >= 30) {
    printf("Obesidade grau 1\n");
  } else if (res >= 25) {
    printf("Sobrepeso\n");
  } else if (res >= 18.5) {
    printf("Peso ideal\n");
  } else {
    printf("Abaixo do peso\n");
  }
  return 0;
}