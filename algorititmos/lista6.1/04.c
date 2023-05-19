// 4. Receber números enquanto o usuário quiser digitá-los (a cada número
// informado peça que o usuário digite 1 se quiser informar mais um número ou 2
// se quiser parar). No final, exibir: o maior número; a média aritmética dos
// números.

#include <stdio.h>

int main() {
  float num = 0, media = 0, maiorNumero=0;
  int contadorNum = 0.0, acumulador = 0.0, controlador = 0.0;

  printf("Bem vindo ao calculador de média\n");

  do {
    contadorNum++;
    printf("Digite o %.0i° valor para realizar a média\n", contadorNum);
    scanf("%f", &num);

    if (num > maiorNumero) {
        maiorNumero = num;
    }

    acumulador = acumulador + num;

    printf("Digite 1 para inserir mais um valor ou digite 2 para encerrar\n");
    scanf("%i", &controlador);

  } while (controlador != 2);

    media = acumulador / contadorNum;
    printf("A média é: %.1f\n", media);
    printf("O maior número digitado foi: %.1f\n", maiorNumero);
    
  return 0;
}