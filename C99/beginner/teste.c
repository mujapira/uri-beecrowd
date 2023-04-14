#include <stdio.h>

int calcTotal(int hour, int minutes) {
  int hMinutes = hour * 60;
  int total = hMinutes + minutes;
  int max = 8 * 60;
  int result = max - total;
  if (result < 0) {
    return 0;
  }
  return result;
}

int main() {
  char a[4];
  scanf("%s", a);

  int hour = a[0] - '0';
  int minutes = (a[1] - '0') * 10 + a[2] - '0';

  int total = calcTotal(hour, minutes);

  printf("Atraso maximo: %i", total);

  return 0;
}