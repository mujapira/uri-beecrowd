#include <stdio.h>

int main() {
  int altura, base, contador, contadorS;
  printf("Arvore de natal, degite a altura da arvore\n");
  scanf("%i", &altura);

  base = (altura * 2) - 1;
  contador = 1;
  // cabeçola
  for (int i = 1; i <= altura; i++) {
    // espaço
    for (int a = base; a > i; a--) {
      printf(" ");
    }

    // folha
    for (int b = 0; b < contador; b++) {
      printf("*");
    }

    printf("\n");
    contador = contador + 2;
  }

  // pau
  for (int j = 1; j <= altura; j++) {
    for (int kaki = 1; kaki < base; kaki++) {
      printf(" ");
    }
    printf("*");

    printf("\n");
  }

  return 0;
}
