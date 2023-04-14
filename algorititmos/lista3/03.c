#include <stdio.h>

int main() {
  float nota1, nota2, media, faltou;

  printf("insira sua nota das duas provas\n");

  scanf("%f %f", &nota1, &nota2);

  media = (nota1 + nota2) / 2;
  faltou = 5 - media;
  if (media >= 5) {
    printf("aprovado\n");
  } else {
    printf("reprovado, faltou %f pontos\n", faltou);
  }
  return 0;
}