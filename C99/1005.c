#include <stdio.h>

int main(){
    double grade1, grade2, average;

    scanf("%lf %lf", &grade1, &grade2);

    average = (grade1 * 3.5 + grade2 * 7.5) / 10;

    printf("MEDIA = %.5lf\n", average);

    return 0;
}