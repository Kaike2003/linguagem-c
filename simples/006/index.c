#include <stdio.h>

int main()
{

    float nota1, nota2, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("nota1: %f \n nota2: %f \n media: %f", nota1, nota2, media);

    return 0;
}