#include <stdio.h>

int main() {
  long entrada;           // vamos usar long pra caber entrada de 10 digitos
  int digitos[10] = {0};  // coloca zero em todo mundo
  int tamanho = 0;

  printf("Digite um número inteiro de no máximo 10 dígitos:\n");
  scanf("%ld", &entrada);

  if (entrada > 9999999999) {
    printf("Número muito grande.\n");
    return 0;
  }
  // digitos vale [0,0,0,0,0,0,0,0,0,0]
  // entrada fake 1024
  // Armazena os digitos no Array de forma inversa [4,2,0,1]

  while (entrada > 0) {  // entra 1024
    digitos[tamanho] = entrada % 10;  // armazena o 4(entrada % 10) no primeiro(digitos[0])
    entrada /= 10; // entrada vira 102
    tamanho++; // tamanho vai de zero para 1
  }

  // Verifica se o novo array é um palíndromo
  int palindromo = 1;  // Assume que é um palíndromo por padrão

  for (int i = 0; i < tamanho / 2; i++) { // rodar 2 vezes (4 / 2)
    if (digitos[i] != digitos[tamanho - i - 1]) { //se o primeiro for diferente do ultimo e assim por diante
      palindromo = 0;  // Não é um palíndromo
      break;    //termina o for
    }
  }

  if (palindromo == 1) {
    printf("É um palíndromo.\n");
  } else {
    printf("Não é um palíndromo.\n");
  }

  return 0;
}
