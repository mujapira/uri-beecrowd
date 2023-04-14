#include <stdio.h>

int main() {
  int minutos, passou;
  float total;

  printf("insira quantos minutos vc usou\n");

  scanf("%i", &minutos);

  if (minutos <= 50) {
    printf("a conta ficou 50,00 reais\n");
  } else {
    passou = minutos - 50;
    total = 50 + (passou * 1.5);
    printf("a conta ficou %f reais\n", total);
  }

  return 0;
}