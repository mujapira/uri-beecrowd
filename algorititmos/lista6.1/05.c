// 5. Criar um programa de calculadora que vai realizando os cálculos entre dois
// números enquanto o usuário desejar. Criar um menu de opções conforme mostrado
// a seguir: 1 – Soma 2 – Subtração 3 – Multiplicação 4 – Divisão 5 – Sair

int main() {
  float num = 0, numOne = 0, numTwo = 0, resultado = 0;
  int controlador = 0;

  printf("Bem vindo a mini calculadora\n");

  do {
    printf("Digite o primeiro número para operar\n");
    scanf("%f", &numOne);
    printf("Digite o segundo número para operar\n");
    scanf("%f", &numTwo);

    printf("Digite 1 para somar\n");
    printf("Digite 2 para subtração\n");
    printf("Digite 3 para multiplicação\n");
    printf("Digite 4 para divisão\n");
    printf("Digite 5 para encerrar\n");
    scanf("%i", &controlador);

    if (controlador == 1) {
      resultado = numOne + numTwo;
      printf("A som de %.1f com %.1f resulta em %.1f\n", numOne, numTwo, resultado);
    } else if (controlador == 2) {
      resultado = numOne - numTwo;
      printf("A subtração de %.1f com %.1f resulta em %.1f\n", numOne, numTwo, resultado);
    } else if (controlador == 3) {
      resultado = numOne * numTwo;
      printf("A multiplicação de %.1f com %.1f resulta em %.1f\n", numOne, numTwo, resultado);
    } else if (controlador == 4) {
      resultado = numOne / numTwo;
      printf("A divisão de %.1f com %.1f resulta em %.1f\n", numOne, numTwo, resultado);
    } else if (controlador == 5) {
      printf("Encerrando calculadora\n");
    } else {
      printf("Operação inválido\n");
    }

  } while (controlador != 5);

  return 0;
}