#include <stdio.h>

int main() {
  float entrada, val;
  printf("de qual numero vc quer ver a tabuada?\n");

  scanf("%f", &entrada);

  for (int i = 1; i < 11; i++) {
    val = entrada * i;
    printf("%.2f x %i = %.2f \n", entrada, i, val);
  }
  
  return 0;
}