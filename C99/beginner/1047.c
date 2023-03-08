#include <stdio.h>

int main() {
  int entry1, entry2, entry3, entry4, res, horas, minutos;

  scanf("%d %d %d %d", &entry1, &entry2, &entry3, &entry4);

  if (entry1 > entry3) {
    horas = (24 - entry1) + entry3;
    if (entry2 > entry4) {
      minutos = 60 - (entry2 - entry4);
      horas = horas - 1;
    } else if (entry2 < entry4) {
      minutos = entry4 - entry2;
    } else {
      minutos = 0;
    }
  } else if (entry1 < entry3) {
    horas = entry3 - entry1;
    if (entry2 > entry4) {
      minutos = 60 - (entry2 - entry4);
      horas = horas - 1;
    } else if (entry2 < entry4) {
      minutos = entry4 - entry2;
    } else {
      minutos = 0;
    }
  } else {
    horas = 24;
    if (entry2 > entry4) {
      minutos = 60 - (entry2 - entry4);
      horas = horas - 1;
    } else if (entry2 < entry4) {
      horas = 0;
      minutos = entry4 - entry2;
    } else {
      minutos = 0;
    }
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
  return 0;
}