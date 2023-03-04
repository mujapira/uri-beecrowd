#include <stdio.h>

int main() {
  int a, b;
  // numero multiplo = que podem ser dividios com resto zero
  scanf("%d %d", &a, &b);
  if (a > b) {  // sempre dividir um maior por um menor
    if (a % b == 0) {
      printf("Sao Multiplos\n");
    } else {
      printf("Nao sao Multiplos\n");
    }
  } else {
    if (b % a == 0) {
      printf("Sao Multiplos\n");
    } else {
      printf("Nao sao Multiplos\n");
    }
  }

  return 0;
}