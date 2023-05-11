#include <stdio.h>

int main() {
  int studentsAmount, disciplineAmount, i, j;
  float disciplineScore, average = 0, scoreSum = 0;
  printf("Digite quantos alunos estão cursando o terceiro semestre\n");
  scanf("%i", &studentsAmount);

  for (i = 0; i < studentsAmount; i++) {
    printf("Digite quantas disciplinas o aluno %i cursou no segundo semestre\n", i + 1);
    scanf("%i", &disciplineAmount);

    for (j = 0; j < disciplineAmount; j++) {
    printf("Digite a nota final da disciplica %i\n", j+1);
    scanf("%f", &disciplineScore);
    scoreSum = scoreSum + disciplineScore;
    }
    average = scoreSum / disciplineAmount;
    printf("A média do aluno %i é %f \n", i + 1, average);
    average = scoreSum = 0;
  }


  return 0;
}