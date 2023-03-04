#include <stdio.h>

int main() {
  int amount, i, force;
  char name[20];

  scanf("%d", &amount);

  for (i = 1; i <= amount; i++) {
    scanf("%s", &name);
    scanf("%d", &force);

    if (name[0] == 'T' && name[1] == 'h' && name[2] == 'o' && name[3] == 'r') {
      printf("Y\n");
    } else {
      printf("N\n");
    }
  }

  return 0;
}