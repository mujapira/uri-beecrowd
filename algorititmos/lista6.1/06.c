// 6. Escreva um programa para receber o saldo inicial de uma conta bancária de
// um cliente. A seguir ler um número indeterminado de pares de valores
// indicando respectivamente o tipo da operação, sendo: 1.
// Depósito 2.Retirada 3.Fim e também o valor. Quando for informado para o tipo
// o código 3, o programa deve ser encerrado e impresso o saldo final da conta
// com as seguintes mensagens: CONTA ZERADA, CONTA ESTOURADA (se o saldo for
// negativo) ou CONTA PREFERENCIAL (se o saldo for positivo).

#include <stdio.h>

int main() {
    float saldoInicial, saldoAtual, valor;
    int tipo;

    printf("Digite o seu saldo inicial\n");
    scanf("%f", &saldoInicial);
    printf("Seu saldo inicial é de %.2f\n", saldoInicial);

    saldoAtual = saldoInicial;

    printf("Insira suas operações\n");
    printf("1 para depósito, 2 para retirada, 3 para encerrar\n");
    scanf("%i", &tipo);

    do {
        if(tipo == 1){
        printf("Depósito de: ");
        } else if ( tipo == 2){
        printf("Retirada de: ");
        }
        scanf("%f", &valor);

        if (tipo == 1) {
            saldoAtual = saldoAtual + valor;
        } else if (tipo == 2){
            saldoAtual = saldoAtual - valor;
        }

        printf("1 para depósito, 2 para retirada, 3 para encerrar\n");
        scanf("%i", &tipo);
    } while (tipo != 3);

    if (saldoAtual < 0){
        printf("NEGATIVADO\n");
    } else if (saldoAtual > 0){
        printf("PREFERENCIAL\n");
    } else {
        printf("ZERADO\n");
    }

  return 0;
}