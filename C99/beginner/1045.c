#include <stdio.h>

int main() {
  double lado1, lado2, lado3;  // entradas
  double a, b, c;   // ondem decrescente
  double A, B, C;   //potencias

  scanf("%lf %lf %lf", &lado1, &lado2, &lado3);

  // arranjando os lados em ordem descrente
  if (lado1 >= lado2 && lado1 >= lado3) {
    a = lado1;
    if (lado2 >= lado3) {
      b = lado2;
      c = lado3;
    } else {
      b = lado3;
      c = lado2;
    }
  } else if (lado2 >= lado1 && lado2 >= lado3) {
    a = lado2;
    if (lado1 >= lado3) {
      b = lado1;
      c = lado3;
    } else {
      b = lado3;
      c = lado1;
    }
  } else if (lado3 >= lado1 && lado3 >= lado2) {
    a = lado3;
    if (lado1 >= lado2) {
      b = lado1;
      c = lado2;
    } else {
      b = lado2;
      c = lado1;
    }
  } else {
    a = lado1;
    b = lado2;
    c = lado3;
  }

  // potencias
  A = a * a;
  B = b * b;
  C = c * c;

  // se nao formar triangulo nao pode haver mais validações
  if (a >= b + c) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    // se formar triangulo
    if (A == B + C) {
      printf("TRIANGULO RETANGULO\n");
    }

    if (A > B + C) {
      printf("TRIANGULO OBTUSANGULO\n");
    }

    if (A < B + C) {
      printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c) {
      printf("TRIANGULO EQUILATERO\n");
    }

    if ((a == b && a != c) || (a == c && a != b) || (c == b && c != a)) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  return 0;
}