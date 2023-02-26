#include <stdio.h>

int main(){
    double grade1, grade2, grade3, average;

    scanf("%lf %lf %lf", &grade1, &grade2, &grade3);

    average = (grade1 * 2 + grade2 * 3 + grade3 * 5) / (2+3+5);

    printf("MEDIA = %.1lf\n", average);

    return 0;
}