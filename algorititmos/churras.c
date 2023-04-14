#include <stdio.h>

int main() {
  int homens, mulheres, crianças;
  float consumoHomens, consumoMulheres, consumoCrianças;

  printf("Calculo do churrasquinho dos parça\n");

  printf("Digite a quantidade de homens\n");
  scanf("%d", &homens);

  printf("Digite a quantidade de mulheres\n");
  scanf("%d", &mulheres);

  printf("Digite a quantidade de crianças\n");
  scanf("%d", &crianças);

  printf("você vai precisar comprar:\n");

  int latinhasDeCerveja;
  latinhasDeCerveja = (homens * 3) + (mulheres * 1) + (crianças * 0);
  printf("latinhasDeCerveja: %i\n", latinhasDeCerveja);

  int pinga51;
  pinga51 = (homens % 5) + (mulheres % 10) + (crianças * 0);
  printf("Garrafas de 51: %i\n", pinga51);

  int bandeijaPaoDeAlho;
  bandeijaPaoDeAlho = (homens % 2) + (mulheres % 2) + (crianças * 0.5);
  printf("bandeijas de pão de alho: %i\n", bandeijaPaoDeAlho);

  int refrigerante2l;
  refrigerante2l = (homens * 0.5) + (mulheres % 5) + (crianças % 2);
  printf("refrigerante2l: %i\n", refrigerante2l);

  float kilosDeLinguiça;
  kilosDeLinguiça = (homens * 0.2) + (mulheres * 0.4) + (crianças * 0.1);
  printf("Kilos de linguiça: %f\n", kilosDeLinguiça);

  float kilosDePicanha;
  kilosDePicanha = (homens * 0.6) + (mulheres * 0.2) + (crianças * 0.1);
  printf("Kilos de picanha: %f\n", kilosDePicanha);

  float kilosDeBerinjela;
  kilosDeBerinjela = (homens * 0.2) + (mulheres * 0.2) + (crianças * 0.1);
  printf("Kilos de berinjela: %f\n", kilosDeBerinjela);

  float kilosDeFrango;
  kilosDeFrango = (homens * 0.4) + (mulheres * 0.2) + (crianças * 0.1);
  printf("Kilos de frango: %f\n", kilosDeFrango);

  int bandeijaDeQueijo;
  bandeijaDeQueijo = (homens * 0.4) + (mulheres * 0.2) + (crianças * 0.1);
  printf("Bandeijas de queijo: %i\n", bandeijaDeQueijo);

  int paoFrançes;
  paoFrançes = (homens * 2) + (mulheres * 1) + (crianças * 1);
  printf("Paes franceses: %i\n", paoFrançes);

  return 0;
}