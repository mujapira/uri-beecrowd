#include <stdio.h>

int main() {
  float currentPersonHeight, averageWomanHeight, allWomanHeight,
      smallestPersonHeight, tallestPersonHeight;

  int currentPersonGender, loopCounter, menCounter;
  int womanCounter, tallestPersonGender;

  allWomanHeight = 0;
  smallestPersonHeight = 0;
  tallestPersonGender = 0;
  tallestPersonHeight = 0;
  averageWomanHeight = 0;
  menCounter = 0;
  womanCounter = 0;

  for (loopCounter = 0; loopCounter < 15; loopCounter++) {
    printf("olá pessoa numero %i\n", loopCounter + 1);

    printf("insira o seu sexo, 1 para homem, 2 para mulher\n");
    scanf("%i", &currentPersonGender);

    printf("insira a sua altura\n");
    scanf("%f", &currentPersonHeight);

    if (currentPersonGender == 1) {
      menCounter = menCounter + 1;
    } else {
      womanCounter = womanCounter + 1;
      allWomanHeight = allWomanHeight + currentPersonHeight;
    }

    if (loopCounter != 0) {
      if (currentPersonHeight > tallestPersonHeight) {
        tallestPersonHeight = currentPersonHeight;
        tallestPersonGender = currentPersonGender;
      }

      if (currentPersonHeight < smallestPersonHeight) {
        smallestPersonHeight = currentPersonHeight;
      }

      if (currentPersonHeight == tallestPersonHeight) {
        if (currentPersonGender != tallestPersonGender) {
          tallestPersonGender = 3;
        }
      }

    } else {
      tallestPersonHeight = currentPersonHeight;
      smallestPersonHeight = currentPersonHeight;
      tallestPersonGender = currentPersonGender;
    }
  }
  if (womanCounter != 0) {
    averageWomanHeight = allWomanHeight / womanCounter;
  } else {
    averageWomanHeight = 0;
  }

  printf("A altura da pessoa mais baixa é: %.2f\n", smallestPersonHeight);
  printf("A média da altura das mulheres é: %.2f\n", averageWomanHeight);
  printf("A quantidade de homens é: %i\n", menCounter);
  if (tallestPersonGender == 1) {
    printf("A pessoa mais alta é homem\n");
  } else if (tallestPersonGender == 2) {
    printf("A pessoa mais alta é mulher\n");
  } else {
    printf("O homem mais alto e a mulher mais alta tem a mesma altura\n");
  }

  return 0;
}



printf("");
printf("");
printf("");
printf("");
printf("");
printf("");