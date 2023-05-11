#include <stdio.h>

int main() {
  float numeroDeHabitantes, numeroDeHabitantesMaioresDeIdade,
      porcentagemHabitantesMaioresDeIdade, idadeHabitante;
  int contador;

  numeroDeHabitantesMaioresDeIdade = 0;
  printf("Bem vindo ao meu primeiro programa!\n");
  printf("Calcularemos a porcentagem de pessoas maiores de idade da cidade\n");
  printf("Digite quantos habitantes serão analisados\n");
  scanf("%f", &numeroDeHabitantes);

  for (contador = 0; contador < numeroDeHabitantes; contador++) {
    printf("Insira a idade da pessoa %i\n", contador + 1);
    scanf("%f", &idadeHabitante);

    if (idadeHabitante >= 18) {
      numeroDeHabitantesMaioresDeIdade = numeroDeHabitantesMaioresDeIdade + 1;
    }
  }

  porcentagemHabitantesMaioresDeIdade =
      (numeroDeHabitantesMaioresDeIdade / numeroDeHabitantes) * 100;

  if (porcentagemHabitantesMaioresDeIdade > 50) {
    printf("Mais da metade da população pode dirigir!\n");
  } else {
    if (porcentagemHabitantesMaioresDeIdade < 5) {
      if(porcentagemHabitantesMaioresDeIdade == 0){
      printf("Ninguém pode dirigir!\n");
      } else {
      printf("Quase ninguém pode dirigir!\n");
      }
    } else {
      printf("Menos da metade da população pode dirigir \n");
    }
  }

  return 0;
}