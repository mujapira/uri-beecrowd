#include <stdio.h>
 
int main() { 
    double raio, pi, calc;

    scanf("%lf", &raio);
    calc = 4.0/3.0 * 3.14159 * (raio * raio * raio);

    printf("VOLUME = %.3lf\n", calc);

    return 0;
}