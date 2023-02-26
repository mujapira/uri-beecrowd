#include <stdio.h>

int main()
{
    double entrada; // em float perde 1 centavo
    int resto, cedulas, moedas;
    scanf("%lf", &entrada); // entrada

    cedulas = entrada; //valor inteiro do double
    moedas = (entrada - cedulas) * 100; //valor inteiro do double nos centavos

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cedulas / 100);
    resto = cedulas % 100;
    printf("%d nota(s) de R$ 50.00\n", resto / 50);
    resto = resto % 50;
    printf("%d nota(s) de R$ 20.00\n", resto / 20);
    resto = resto % 20;
    printf("%d nota(s) de R$ 10.00\n", resto / 10);
    resto = resto % 10;
    printf("%d nota(s) de R$ 5.00\n", resto / 5);
    resto = resto % 5;
    printf("%d nota(s) de R$ 2.00\n", resto / 2);
    resto = resto % 2;
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", resto / 1);
    resto = 0;
    printf("%d moeda(s) de R$ 0.50\n", moedas / 50);
    resto = moedas % 50;
    printf("%d moeda(s) de R$ 0.25\n", resto / 25);
    resto = resto % 25;
    printf("%d moeda(s) de R$ 0.10\n", resto / 10);
    resto = resto % 10;
    printf("%d moeda(s) de R$ 0.05\n", resto / 5);
    resto = resto % 5;
    printf("%d moeda(s) de R$ 0.01\n", resto / 1);
  
    return 0;
}