#include <stdio.h>

int main() {
  float lado1, lado2, lado3;  // entradas

  scanf("%f %f %f", &lado1, &lado2, &lado3);


    if (lado1 == lado2 && lado2 == lado3) {
      printf("TRIANGULO EQUILATERO\n");
    } else if ((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado3 == lado2 && lado3 != lado1)) {
      printf("TRIANGULO ISOSCELES\n");
    } else {
      printf("TRIANGULO ESCALENO\n");
    }
  
  return 0;
}