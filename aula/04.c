#include <stdio.h>

int main() { 
    float numeroDeHabitantes, numeroDeHabitantesMaioresDeIdade, porcentagemHabitantesMaioresDeIdade;

    printf("Bem vindo ao meu primeiro programa!\n");
    printf("Calcularemos a porcentagem de pessoas maiores de idade da cidade\n");
    printf("Insira, respectivamente, a quantidade total de habitantes e quantos são maiores de idade\n");

    scanf("%f %f", &numeroDeHabitantes, &numeroDeHabitantesMaioresDeIdade);
    porcentagemHabitantesMaioresDeIdade = (numeroDeHabitantesMaioresDeIdade / numeroDeHabitantes) * 100;

    if (porcentagemHabitantesMaioresDeIdade > 50) {
        printf("Mais da metade da população pode dirigir!\n");
    } else {
        if (porcentagemHabitantesMaioresDeIdade < 5) {
         printf("Quase ninguém pode dirigir!\n");
        } else {
            printf("Menos da metade da populção pode dirigir \n");
        }
    }


    return 0;
}