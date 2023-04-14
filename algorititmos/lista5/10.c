#include <stdio.h>

int main() {
  float altura, ultimaAltura, menorAltura, mediaAltura, mediaAlturaMulheres,
      quantidadeHomem, quantidadeMulher, somaAlturaMulheres, maiorAltura;
  int sexo;

  for (int i = 0; i < 2; i++) {
    printf("olá pessoa :)\n");
    printf("insira a sua altura\n");
    scanf("%f", &altura);

    printf("insira o seu sexo, 1 se for homem, 2 se for mulher\n");
    scanf("%i", &sexo);

    if (ultimaAltura == 0) {
      ultimaAltura = altura;
    }

    if (ultimaAltura <= altura) {
      menorAltura = ultimaAltura;
    } else {
      menorAltura = altura;
    }

    ultimaAltura = altura;

    if (sexo == 1) {
      quantidadeHomem = quantidadeHomem + 1;
    } else if (sexo == 2) {
      quantidadeMulher = quantidadeMulher + 1;
      somaAlturaMulheres = somaAlturaMulheres + altura;
    }
  }

  if (quantidadeMulher > 0) {
    mediaAlturaMulheres = somaAlturaMulheres / quantidadeMulher;
  } else {
    mediaAlturaMulheres = 0;
  }
  printf("teste: %f\n", maiorAltura);

  printf("a menor altura é: %f\n", menorAltura);
  printf("a quantidade de homens é: %f\n", quantidadeHomem);
  printf("a media da altura das mulheres é: %f\n", mediaAlturaMulheres);
  if (maiorAltura == 1) {
    printf("A pessoa mais alta é homem\n");
  } else if (maiorAltura == 2) {
    printf("A pessoa mais alta é mulher\n");
  } else {
    printf("O homem e a mmulher mais altos tem a mesma altura\n");
  }

  return 0;
}