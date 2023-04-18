#include <stdio.h>

int main() {
  int i, n;
  float somatoriaEntradas, mediaFinal, entrada;
  somatoriaEntradas = 0;
  mediaFinal = 0;
  printf("Calcular a média de N números\n");
  printf("Digite o valor de N\n");
  scanf("%i", &n);

  for (i = 0; i < n; i++) {
    printf("Digite o valor %i\n", i + 1);
    scanf("%f", &entrada);
    somatoriaEntradas = somatoriaEntradas + entrada;
  }

  mediaFinal = somatoriaEntradas / n;
  printf("a média é: %.2f", mediaFinal);

  return 0;
}