#include <stdio.h>

int main() {
  float intervalOneInput, intervalTwoInput;
  float intervalOne, intervalTwo, value;

  printf("insira um intervalo (dois numeros) e um número\n");

  scanf("%f %f %f", &intervalOneInput, &intervalTwoInput, &value);

  // if (intervalOneInput > intervalTwoInput) {
  intervalOne = intervalOneInput;
  intervalTwo = intervalTwoInput;
  // } else {
  //   intervalOne = intervalTwoInput;
  //   intervalTwo = intervalOneInput;
  // }

  if (intervalOne == value || intervalTwo == value) {
    printf("Valor em uma extremidade\n");
  } else if (intervalOne < value || intervalTwo > value) {
    printf("Fora do intervalo\n");
  } else {
    printf("Dentro do intervalo\n");
  }

  return 0;
}