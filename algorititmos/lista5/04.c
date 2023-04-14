#include <stdio.h>

int main() {
  float mediaTeo, mediaLab, mediaFinal;
  printf("Media da classe de 50 alunos\n");

  for (int i = 1; i < 51; i++) {
    printf("Digite a Media da prova teórica do aluno %i\n", i);
    scanf("%f", &mediaTeo);
    printf("Digite a Media da prova laboratório do aluno %i\n", i);
    scanf("%f", &mediaLab);
    mediaFinal = (mediaTeo * 0.6) + (mediaLab * 0.4);
    printf("a média final é %.2f, ", mediaFinal);
    if (mediaFinal >= 7) {
      printf("Aluno foi bem\n");
    } else if (mediaFinal >= 5) {
      printf("Aluno foi razoavel\n");
    } else {
      printf("Aluno foi mal\n");
    }
  }

  return 0;
}