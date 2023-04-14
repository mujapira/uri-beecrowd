#include <stdio.h>

int main() {
  int entrada, i, num;
  scanf("%d", &entrada);

  for (i = 1; i <= entrada; i++) {
    scanf("%d", &num);

    if (num % 2 == 0) {
      printf("0\n");
    } else {
      printf("1\n");
    }
  }

  return 0;
}