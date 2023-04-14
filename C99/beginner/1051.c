#include <stdio.h>

int main() {
  float input, resultado, resto;
  scanf("%f", &input);

 
  if (input <= 2000) {
    printf("Isento\n");
  } else if(input <= 3000) {
    resto = input - 2000;
    resultado = resto * 0.08;
    printf("R$ %.2f\n", resultado);
  
  } else if (input <= 4500) {
    resto = input - 2000 - 1000;
    resto = resto * 0.18;
    resultado = resto + 1000 * 0.08;
    printf("R$ %.2f\n", resultado);
  } else {
    resto = input - 2000 - 1000 - 1500;
    resto = resto * 0.28;
    resultado = resto + 1000 * 0.08 + 1500*0.18;
    printf("R$ %.2f\n", resultado);
  }

  return 0;
}