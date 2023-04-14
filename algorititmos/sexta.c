#include <stdio.h>

int main() {
  float dinheiro, resto;

  printf("Digite o quanto vc pretende gastar hoje\n");
  scanf("%f", &dinheiro);

  if (dinheiro >= 30) {
    printf("Consigo ir ao cinema\n");
    resto = dinheiro - 30;
    printf("restou %.2f, ", resto);
    if (resto <= 0) {
      printf("acabou a grana\n");
    } else {
      if (resto >= 30) {
        printf("Consigo comprar um combo de coca e pipoca\n");
        resto = dinheiro - 30;
        printf("restou %.2f, ", resto);
        if (resto <= 0) {
          printf("acabou a grana");
        } else {
          if (resto >= 10) {
            printf("consigo comprar um chocolatinho\n");
            resto = dinheiro - 10;
            printf("restou %.2f, ", resto);

          }
        }
      } else {
        printf("acabou a grana\n");
      }
    }
  } else {
    printf("não posso sair");
  }

  return 0;
}