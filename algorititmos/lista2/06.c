#include <stdio.h>

int main()
{
    printf("Função média ponderada\n");

    float pratica1, pratica2, teorica1, teorica2, mediaPratica, mediaTeorica, mediaFinal;

    printf("Por favor, digite a nota da prova prática 1:\n");
    scanf("%f", &pratica1);

    printf("Por favor, digite a nota da prova prática 2:\n");
    scanf("%f", &pratica2);

    printf("Por favor, digite a nota da prova teorica 1:\n");
    scanf("%f", &teorica1);

    printf("Por favor, digite a nota da prova teorica 2:\n");
    scanf("%f", &teorica2);

    mediaPratica = (pratica1 + pratica2) / 2;
    mediaTeorica = (teorica1 + teorica2) / 2;
    mediaFinal = ((mediaPratica * 4) + (mediaTeorica * 6)) / 10;
    printf("media final: %f\n", mediaFinal);

    return 0;
}
