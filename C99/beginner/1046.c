#include <stdio.h>

int main() {
  int entry1, entry2, res;

  scanf("%d %d", &entry1, &entry2);

  if (entry1 > entry2) {
    res = (24 - entry1) + entry2;
  } else if (entry1 < entry2) {
    res = entry2 - entry1;
  } else {
    res = 24;
  }

  printf("O JOGO DUROU %d HORA(S)\n", res);
  return 0;
}