#include <stdio.h>

int main() {
  float alturaDaMulher, acumuladorAlturaDaMulher, quantidadeMulheres, sexo;

  for (int i = 0; i < 10; i++) {
    scanf("%f", &alturaDaMulher);
    scanf("%f", &sexo);

    if (sexo == 2) {
      quantidadeMulheres = quantidadeMulheres + 1;
    }

    acumuladorAlturaDaMulher = acumuladorAlturaDaMulher + alturaDaMulher;
  }

  return 0;
}