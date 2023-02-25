#include <stdio.h>
 
int main() { 
    int code1, code2, n1, n2;
    float val1, val2, total;

    scanf("%d %d %f", &code1, &n1, &val1);
    scanf("%d %d %f", &code2, &n2, &val2);
    total = (n1 * val1) + (n2 * val2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}