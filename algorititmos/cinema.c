#include <stdio.h>

int main() {
  // inicializando variáveis
  int sessionRows = 20;
  int sessionSeats = 30;
  int session[sessionRows][sessionSeats];
  int ticketBasePrice = 0;
  int ticketPrice = 0;
  int ticketType = 0;
  int seatRow = 0;
  int seatNumber = 0;
  int isSeatAvailable = 0;
  int operationStatus = 0;
  int ticketsSold = 0;
  int totalIncome = 0;
  int totalNormalTickets = 0;
  int totalHalfTickets = 0;
  int totalFreeTickets = 0;
  // zerando todos os valores
  for (int i = 0; i < sessionRows; i++) {
    for (int j = 0; j < sessionSeats; j++) {
      session[i][j] = 0;
    }
  }

  // temos algo assim mas bem maior
  //  [0][0][0]  //[i0j0][i0j1][i0j2]
  //  [0][0][0]  //[i1j0][i1j1][i1j2]

  printf("Gerenciador cine caceta! \n");

  printf("Assentos disponíveis\n");
  for (int i = 0; i < sessionRows; i++) {
    if (i < 9) {
      printf("Fileira %i  | ", i + 1);
    } else {
      printf("Fileira %i | ", i + 1);
    }
    for (int j = 0; j < sessionSeats; j++) {
      if (j < 9) {
        printf("[0%i] ", j + 1);
      } else {
        printf("[%i] ", j + 1);
      }
    }
    printf("\n");
  }
  printf("\n");

  printf("Digite o preço base (valor cheio) do ingresso\n");
  scanf("%i", &ticketBasePrice);

  do {
    printf(
        "Digite o tipo de ingresso vendido: 1=normal, 2=meia e 3=cortesia \n");

    do {
      scanf("%i", &ticketType);
      if (ticketType == 1) {
        ticketPrice = ticketBasePrice;
        totalNormalTickets = totalNormalTickets + 1;
      } else if (ticketType == 2) {
        ticketPrice = ticketBasePrice / 2;
        totalHalfTickets = totalHalfTickets + 1;
      } else if (ticketType == 3) {
        ticketPrice = 0;
        totalFreeTickets = totalFreeTickets + 1;
      } else {
        printf("Digite um tipo de ingresso valido mané\n");
        printf("1=normal, 2=meia e 3=cortesia burrão\n");
      }
    } while (ticketType < 1 || ticketType > 3);
    printf("Digite onde o malandro vai sentar\n");

    do {
      // fileira
      do {
        printf("Fileira (1 a 20): ");
        scanf("%i", &seatRow);

        if (seatRow <= 1 || seatRow >= sessionRows + 1) {
          printf("*ERRO* Digite uma fileira válida mané.\n");
        }
      } while (seatRow < 1 || seatRow >= sessionRows + 1);

      // assento
      do {
        printf("\nNumero do assento (1 a 30): ");
        scanf("%i", &seatNumber);

        if (seatNumber < 1 || seatNumber >= sessionSeats + 1) {
          printf("\n *ERRO* Digite um assento valido mané. \n");
        }
      } while (seatNumber < 1 || seatNumber >= sessionSeats + 1);

      if (session[seatRow - 1][seatNumber - 1] != 0) {
        printf("*ERRO* Você já vendeu esse assento, animal.\n");
      }
    } while (session[seatRow - 1][seatNumber - 1] != 0);

    ticketsSold = ticketsSold + 1;
    totalIncome = totalIncome + ticketPrice;

    session[seatRow - 1][seatNumber - 1] = 1;

    printf("\nAssento vendido, parabéns\n\n");

    printf("{**********************}\n");
    printf("{ Ingresso cine caceta }\n");
    printf("{ Fileira %i, assento %i }\n", seatRow, seatNumber);
    printf("{**********************}\n\n");

    printf("Vai vender mais? digita 1, se não digita 2\n");
    scanf("%i", &operationStatus);

    if (operationStatus == 1) {
      printf("Vamos lá então, aqui estão os vendidos pra vc n se perder\n");
      for (int i = 0; i < sessionRows; i++) {
        if (i < 9) {
          printf("Fileira %i  | ", i + 1);
        } else {
          printf("Fileira %i | ", i + 1);
        }
        for (int j = 0; j < sessionSeats; j++) {
          if (j < 9) {
            if (session[i][j] == 1) {
              printf("[XX] ");
            } else {
              printf("[0%i] ", j + 1);
            }
          } else {
            if (session[i][j] == 1) {
              printf("[XX] ");
            } else {
              printf("[%i] ", j + 1);
            }
          }
        }
        printf("\n");
      }
      printf("\n");
    } else {
      printf("Valeu, até mais\n");
    }

    printf("\n");
  } while (operationStatus != 2);

  printf("Resumo da sessão\n");
  printf("Total de ingressos vendidos: %i\n", ticketsSold);
  printf("Total de ingressos normais vendidos: %i\n", totalNormalTickets);
  printf("Total de ingressos meia entrada vendidos: %i\n", totalHalfTickets);
  printf("Total de ingressos cortesia fornecidos: %i\n", totalFreeTickets);
  printf("Total arrecadado: %i\n\n", totalIncome);

  for (int i = 0; i < sessionRows; i++) {
    if (i < 9) {
      printf("Fileira %i  | ", i + 1);
    } else {
      printf("Fileira %i | ", i + 1);
    }
    for (int j = 0; j < sessionSeats; j++) {
      if (j < 9) {
        if (session[i][j] == 1) {
          printf("[XX] ");
        } else {
          printf("[0%i] ", j + 1);
        }
      } else {
        if (session[i][j] == 1) {
          printf("[XX] ");
        } else {
          printf("[%i] ", j + 1);
        }
      }
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}