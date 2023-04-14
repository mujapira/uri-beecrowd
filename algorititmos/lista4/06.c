#include <stdio.h>
 
int main() { 
    
    printf("Seja bem vindo a calculadorinha\n");
    printf("Insira dois números e o código da operação desejada\n");
    printf("1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão\n");

    float inputA, inputB, operation, res;

    scanf("%f %f %f", &inputA, &inputB, &operation);

    if (operation == 1) {
        res = inputA + inputB;
    } else if (operation == 2) {
        res = inputA - inputB;
    } else if(operation == 3) {
        res = inputA * inputB;
    } else {
        res = inputA / inputB;
    }

    printf("O resultado da operação foi %.3f\n", res);

    return 0;
}