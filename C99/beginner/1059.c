#include <stdio.h>

int main() {
  int i;

  for (i = 2; i <= 100; ++i) {
    printf("%i\n", i);
    i = i + 1;
  }

  return 0;
}