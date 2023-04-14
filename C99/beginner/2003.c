#include <stdio.h>

int main() {
  char entrada[10];
  int min1, min2, toNum;

  scanf("%s", entrada);

  toNum = entrada[0] - '0';
  if (toNum >= 7) {
    min1 = entrada[2];
    min2 = entrada[3];
    printf("Atraso maximo: %c%c\n", min1, min2);
  } else {
    printf("Atraso maximo: 0\n");
  }

  return 0;
}