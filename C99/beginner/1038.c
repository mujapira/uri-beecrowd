#include <stdio.h>

int main() {
  int code, amount;
  float price, total;

  scanf("%d %d", &code, &amount);

  if (code == 1) {
    price = 4.00;
  } else if (code == 2) {
    price = 4.50;
  } else if (code == 3) {
    price = 5.00;
  } else if (code == 4) {
    price = 2.00;
  } else {
    price = 1.50;
  }

  total = price * amount;

  printf("Total: R$ %.2f\n", total);

  return 0;
}