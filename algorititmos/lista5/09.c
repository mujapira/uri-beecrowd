#include <stdio.h>

int main() {
  float sallary, sallaryAnterior, children, lowSallaryCount,
      lowSallaryPercentage, bigger, mediaSallary, sallarySum, mediaChildren,
      childrenSum;

  for (int i = 0; i < 15; i++) {
    printf("insira o salário do habitante %i\n", i);
    scanf("%f", &sallary);
    printf("insira a quantidade de filhos do habitante %i\n", i);
    scanf("%f", &children);
    sallarySum = sallarySum + sallary;

    if (children > 0) {
      childrenSum = childrenSum + children;
    }

    if (sallary <= 1000) {
      lowSallaryCount = lowSallaryCount + 1;
    }

    if (sallaryAnterior > sallary) {
      bigger = sallaryAnterior;
    } else if (sallaryAnterior == sallary) {
      bigger = sallaryAnterior;
    } else {
      bigger = sallary;
    }
    
  }

  mediaSallary = sallarySum / 15;
  printf("a média salarial é: %.2f\n", mediaSallary);
  mediaChildren = childrenSum / 15;
  printf("a média do número de filhos é: %.2f\n", mediaChildren);
  printf("o maior salário é: %.2f\n", bigger);
  lowSallaryPercentage = (lowSallaryCount / 15) * 100;
  printf("%.2f %% da populção ganha mil reais ou menos\n",
         lowSallaryPercentage);

  return 0;
}