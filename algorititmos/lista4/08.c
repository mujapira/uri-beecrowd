#include <stdio.h>

int main() {
  double height, weight, ideal, idealMais, idealMenos;
  int sex;

  printf("Por favor, digite seu sexo, 1 para masculino, 2 para feminino\n");
  scanf("%i", &sex);

  printf("Por favor, seu peso em kg e sua altura em metros\n");
  scanf("%lf %lf", &weight, &height);

  if (sex == 1) {
    ideal = ((72.7 * height) - 62);
  } else { 
    ideal = (62.1 * height) - 48.7;
  }

  idealMais = (ideal * 0.05) + ideal;
  idealMenos = ideal - (ideal * 0.05);
  printf("seu peso ideal é %.2lf\n", ideal);

  if (weight >= idealMenos && weight <= idealMais) {
    printf("Peso ideal\n");
  } else if (weight > idealMais) {
    printf("Acima do peso\n");
  } else {
    printf("Abaixo do peso\n");
  }

  return 0;
}