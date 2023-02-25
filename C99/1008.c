#include <stdio.h>

int main(){

    int id, hours;
    float value, sal;

    scanf("%d %d %f", &id, &hours, &value);
    sal = hours * value;
    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2f\n", sal);

    return 0;
}
