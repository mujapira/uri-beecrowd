#include <stdio.h>

int main() { 
    float numeroDeHabitantes, numeroDeHabitantesMaioresDeIdade;
    float porcentagemHabitantesMaioresDeIdade;

    printf("Bem vindo ao meu primeiro programa!\n");
    printf("Calcularemos a porcentagem de pessoas maiores de idade da cidade\n");
    printf("Insira, respectivamente, a quantidade total de habitantes e quantos são maiores de idade\n");

    scanf("%f", &numeroDeHabitantes);
    scanf("%f", &numeroDeHabitantesMaioresDeIdade);

    porcentagemHabitantesMaioresDeIdade = (numeroDeHabitantesMaioresDeIdade / numeroDeHabitantes) * 100;

    printf("%.1f %% da população é maior de idade \n", porcentagemHabitantesMaioresDeIdade);

    return 0;
}