#include <stdio.h>

int main() {
  int x, y, z;

  scanf("%d %d %d", &x, &y, &z);
  // ordem crescente
  if (x >= y && x >= z) {  // se x for o maior
    if (y >= z) {          // achando segundo maior
      printf("%d\n%d\n%d\n", z, y, x);
    } else {
      printf("%d\n%d\n%d\n", y, z, x);
    }
  } else if (y >= x && y >= z) {  // se y for o maior
    if (x >= z) {                 // achando segundo maior
      printf("%d\n%d\n%d\n", z, x, y);
    } else {
      printf("%d\n%d\n%d\n", x, z, y);
    }
  } else if (z >= x && z >= y) {  // se z for o maior
    if (x >= y) {                 // achando segundo maior
      printf("%d\n%d\n%d\n", y, x, z);
    } else {
      printf("%d\n%d\n%d\n", x, y, z);
    }
  } else {  // se ninguém é o maior (sao iguais)
    printf("%d\n%d\n%d\n", x, y, z);
  }

  printf("\n%d\n%d\n%d\n", x, y, z);  // print normal com quebra de linha
  return 0;
}