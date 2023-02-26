#include <stdio.h>

int main(){

    char name;
    double sal, bon, total;

    scanf("%s %lf %lf", &name, &sal, &bon);
    total = (bon * 0.15) + sal;

    printf("TOTAL = R$ %.2lf\n", total);
   
    return 0;
}
