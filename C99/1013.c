#include <stdio.h>
 
int main() { 
    int a, c, b;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d eh o maior\n", a);
    } else if (b > c) {
        printf("%d eh o maior\n", b);
    } else {
        printf("%d eh o maior\n", c);
    }

    return 0;
}