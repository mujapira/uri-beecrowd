// 8. A prefeitura de Itu está em eleições. Apresentaram-se 3 candidatos: JOSÉ
// com o nº 1, MARIA com o nº 2 e JOÃO com o nº 3. Cada eleitor deve indicar a
// sua opção, que pode ser o nº de um candidato (1,2,3), voto branco (nº 4) ou
// voto nulo (nº 5). Preparar um programa que receba e processe os dados de um
// número não determinado de cédulas até que seja digitado 0 para o voto,
// escrevendo os seguintes dados: a) o número de votos de cada uma das 5 opções;
// b) o nome do candidato vencedor; c) o percentual de eleitores que elegeram o
// candidato vencedor.

// A contagem dos votos de uma eleição está prevista na Constituição Federal de
// 1988 que diz: "é eleito o candidato que obtiver a maioria dos votos válidos,
// excluídos os brancos e os nulos".
// Ou seja, os votos em branco e os nulos simplesmente não são contados. Por
// isso, apesar do mito, mesmo quando mais da metade dos votos forem nulos, não
// é possível cancelar uma eleição.
// Como é possível notar, os votos nulos e brancos acabam constituindo apenas um
// direito de manifestação de descontentamento do eleitor, não tendo qualquer
// outra serventia para o pleito eleitoral, do ponto de vista das eleições
// majoritárias
#include <stdio.h>

int main() {
  int tipoVoto, contadorEleitores = 0;
  int contadorCandidato1 = 0, contadorCandidato2 = 0, contadorCandidato3 = 0, contadorBranco = 0, contadorNulo = 0;
  float percentualVencedor, votosVencedor;

  printf("Bem vindo a urna mais forte do mundo\n");
  printf("Digite 1 para votar em José\n");
  printf("Digite 2 para votar em Maria\n");
  printf("Digite 3 para votar em João\n");
  printf("Digite 4 para votar em branco\n");
  printf("Digite 5 para votar nulo\n");
  printf("Após todos votarem, digite 0 para saber o resultado\n");

  printf("voto %i: ", contadorEleitores + 1);
  scanf("%i", &tipoVoto);

  do {
    if (tipoVoto == 1) {
      contadorCandidato1 = contadorCandidato1 + 1;

    } else if (tipoVoto == 2) {
      contadorCandidato2 = contadorCandidato2 + 1;

    } else if (tipoVoto == 3) {
      contadorCandidato3 = contadorCandidato3 + 1;

    } else if (tipoVoto == 4) {
      contadorBranco = contadorBranco + 1;

    } else if (tipoVoto == 5) {
      contadorNulo = contadorNulo + 1;
    }
    contadorEleitores = contadorEleitores + 1;
    printf("voto %i: ", contadorEleitores + 1);
    scanf("%i", &tipoVoto);
  } while (tipoVoto != 0);

  if (contadorCandidato1 > contadorCandidato2 || contadorCandidato1 > contadorCandidato3) {
    votosVencedor = contadorCandidato1;
    printf("O vencedor é José com ");
  } else if (contadorCandidato2 > contadorCandidato1 || contadorCandidato2 > contadorCandidato3) {
    votosVencedor = contadorCandidato2;
    printf("O vencedor é Maria com ");
  } else if (contadorCandidato3 > contadorCandidato1 || contadorCandidato3 > contadorCandidato2) {
    votosVencedor = contadorCandidato3;
    printf("O vencedor é João com ");
  } else {
    printf("Segundo turno");
    return 0;
  }

  percentualVencedor = votosVencedor / (contadorEleitores - contadorNulo - contadorBranco) * 100;

  printf("%.2f %% dos votos\n", percentualVencedor);
  return 0;
}