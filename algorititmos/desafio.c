// Criar um vetor de 10 posições de inteiros.
// Receber um valor inteiro.
// Armazenar o dígitos do valor recebido no vetor.
// Exemplo:
//    Valor inteiro digitado= 34635
//    Vetor = [0,0,0,0,0,3,4,6,3,5]

// Usando os valores armazenados no vetor, considerando somente os dígitos
// válidos (desconsiderar zeros a esquerda), dizer se é  ou não um palíndromo.
// Exemplo:

// [0,0,0,0,0,0,0,0,0,1] = Sim
// [0,0,0,0,1,2,3,3,2,1] = Sim
// [0,0,0,0,1,1,1,1,1,1] = Sim
// [0,0,0,0,2,1,2,2,1,2] = Sim
// [0,0,0,0,1,5,3,3,5,1] = Sim

// [0,0,0,0,1,2,3,4,5,6] = Não
// [0,0,0,0,1,1,1,0,0,0] = Não

#include <stdio.h>

int main() {
  //vamos usar long pra poder trabalhar com uma entrada de 10 dígitos, pq no int n cabe 10
  long entrada, ultimoDigito;
  int arrayInicial[10] = {0};       //{0} preenche o array com 0
  int arrayTransformado[10] = {0};  // array que recebera a entrada

  printf("Digite um número inteiro de no máximo 10 dígitos\n");
  scanf("%ld", &entrada);

  if (entrada > 9999999999) {
    printf("numero mt grande");
    return 0;
  }
  // # transformando o número em Array; Exemplo
  // entrada = 1024
  // Vetor = [0,0,0,0,0,0,1,0,2,4]
  for (int i = 9; i >= 0; i--) {
    ultimoDigito = entrada % 10;
    // se entrada == 1024, retorna 4;

    arrayTransformado[i] = ultimoDigito;
    // mete o último dígito do número na última posição do array

    entrada = entrada / 10;
    // se entrada == 1024, entrada vai virar 102,4 => 102;
  }

  // # achando o ultimo zero a esquerda; Exemplo
  // [0,0,0,0,0,_0_,1,0,2,4]
  // se n tiver zero a esquerda, temos que definir como -1 para nao
  // quebrar o int tamanho
  int ultimoZero = -1;
  for (int i = 0; i < 10; i++) {
    if (arrayTransformado[i] == 0 && arrayTransformado[i + 1] != 0) {
      ultimoZero = i;
      break;
    }
  }

  // # criando novo array sem os zeros; Exemplo
  // [0,0,0,0,0,0,1,0,2,4] vira [1,0,2,4]
  int tamanho = (10 - (ultimoZero + 1));
  int novoArray[tamanho];
  for (int i = 0; i < tamanho; i++) {
    novoArray[i] = arrayTransformado[ultimoZero + 1 + i];
  }

  // #verificar se existe palíndromo
  int metade;
  int pal = 0;  // variável pra saber se é palíndromo
  // se tamanho for par nao tem meio => [1,0_,_2,4]
  // se tamanho for impar tem meio => [1,0,_2_,4,4]

  if (tamanho % 2 == 0) {  // caso par
    // [1,0,2,4]
    metade = tamanho / 2;
    int metadeEsquerda[metade];
    int metadeDireita[metade];

    for (int i = 0; i < metade; i++) {
      metadeEsquerda[i] = novoArray[i];
    }  // metade esquerda: [1,0]

    //(tem que guardar ao contrario, por isso o contador existe)
    int contador = 0;
    for (int i = tamanho; i > metade; i--) {
      metadeDireita[contador] = novoArray[i - 1];
      contador++;
    }  // metade direita: [4,2]

    // # comparar as metades
    for (int i = 0; i < metade; i++) {
      if (metadeEsquerda[i] != metadeDireita[i]) {
        pal = 0;
        break;
      } else {
        pal = 1;
      }
    }

  } else {  // caso impar
    // [1,0,2,4,5]
    metade = tamanho / 2;

    int metadeEsquerda[metade];
    int metadeDireita[metade];

    for (int i = 0; i < metade; i++) {
      metadeEsquerda[i] = novoArray[i];
    }  // Metade Esquerda [1,0]

    int contador = 0;

    for (int i = tamanho; i > metade + 1; i--) {
      metadeDireita[contador] = novoArray[i - 1];
      contador++;
    }  // Metade Direita [5,4]

    // # comparar as metades
    for (int i = 0; i < metade; i++) {
      if (metadeEsquerda[i] != metadeDireita[i]) {
        pal = 0;
        break;
      } else {
        pal = 1;
      }
    }
  }

  if (pal == 1) {
    printf("É palíndromo\n");
  } else {
    printf("Não é palíndromo\n");
  }

  return 0;
}