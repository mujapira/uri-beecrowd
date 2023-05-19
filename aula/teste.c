#include <stdio.h>
int main() {
  float peso, altura, imc;

  printf("Informe o peso:\n");
  scanf("%f", &peso);

  printf("Informe a altura: \n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("o imc do individuo e: %.2f \n", imc);

  if (imc < 18.5) {
    printf("abaixo do peso: \n");
  } else {
    if (imc >= 18.5 && imc <= 25.0) { 
      printf("peso ideal: \n");
    } else {
      if (imc > 25.0 && imc <= 30.0) {
        printf("sobrepeso: \n");
      } else {
        if (imc > 30.0 && imc <= 35.0) {
          printf("obesidade grau 1: \n");
        } else {
          if (imc > 35.0 && imc <= 40.0) {
            printf("obesidade grau 2: \n");
          } else {
            printf("folote: \n");
          }
        }
      }
    }
  }

  return 0;
}