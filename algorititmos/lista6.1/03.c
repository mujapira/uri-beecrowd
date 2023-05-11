// 3. Receber a nota de um aluno no módulo 1 e no módulo 2 e calcular
// a média deles. O usuário só pode digitar notas no intervalo de 0 a 10,
// caso ele digite um valor inválido, deve digitar novamente.
#include <stdio.h>

int main() {
  float notaUm, notaDois, media;

  do { //faça isso 
    printf("Digite a nota do módulo 1 \n");
    scanf("%f", &notaUm);

  // enquanto a nota for mais que 10 ou menos que zero
  } while (notaUm > 10 || notaUm < 0);

  do {
    printf("Digite a nota do módulo 2 \n");
    scanf("%f", &notaDois);

  } while (notaDois > 10 || notaDois < 0);


  media = (notaUm + notaDois) / 2;

  printf("A média é %f\n", media);

  return 0;
}