#include <stdio.h>

int main() { 
    float numeroDeHabitantes, numeroDeHabitantesMaioresDeIdade, porcentagemHabitantesMaioresDeIdade;

    numeroDeHabitantesMaioresDeIdade = 60;
    numeroDeHabitantes = 100;
    porcentagemHabitantesMaioresDeIdade = (numeroDeHabitantesMaioresDeIdade / numeroDeHabitantes) * 100;
    printf("Bem vindo ao meu primeiro programa!\n");

    printf("Calcularemos a porcentagem de pessoas maiores de idade da cidade\n");
	
    printf("%.1f %% da população é maior de idade \n", porcentagemHabitantesMaioresDeIdade);

    return 0;
}