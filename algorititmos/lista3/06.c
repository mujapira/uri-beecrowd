#include <stdio.h>

int main() {
  float numerador, denominador, res;

  printf("insira dois numeros para dividir\n");

  scanf("%f %f", &numerador, &denominador);

  if (denominador != 0) {
    res = numerador / denominador;
    printf("o resultado é: %f\n", res);
  } else {
    printf("nao pode dividir por zero\n");
  }
  
  
  return 0;
}