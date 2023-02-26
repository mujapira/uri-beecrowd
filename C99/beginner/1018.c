#include <stdio.h>

int main() {
    int entrada; //total de dinheiro

    scanf("%d", &entrada); //entrada do usuário

    printf("%d\n", entrada); //print da entrada do usuário

    printf("%d nota(s) de R$ 100,00\n", entrada/100); //divisão de inteiros pela cédula
    entrada = entrada % 100; // resto da divisão de inteiros pela cédula anterior

    printf("%d nota(s) de R$ 50,00\n", entrada/50);//divisão de inteiros pela cédula
    entrada = entrada % 50; // resto da divisão de inteiros pela cédula anterior

    printf("%d nota(s) de R$ 20,00\n", entrada/20);//divisão de inteiros pela cédula
    entrada = entrada % 20; // resto da divisão de inteiros pela cédula anterior

    printf("%d nota(s) de R$ 10,00\n", entrada/10);//divisão de inteiros pela cédula
    entrada = entrada % 10; // resto da divisão de inteiros pela cédula anterior

    printf("%d nota(s) de R$ 5,00\n", entrada/5);//divisão de inteiros pela cédula
    entrada = entrada % 5; // resto da divisão de inteiros pela cédula anterior
   
    printf("%d nota(s) de R$ 2,00\n", entrada/2);//divisão de inteiros pela cédula
    entrada = entrada % 2; // resto da divisão de inteiros pela cédula anterior
   
    printf("%d nota(s) de R$ 1,00\n", entrada/1);//divisão de inteiros pela cédula
    return 0;
}