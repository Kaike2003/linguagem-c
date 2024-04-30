#include <stdio.h>

int main()
{

    float nota1, nota2, media;

    printf("Digite  a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite  a primeira nota:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media > 7)
    {
        return printf("Media %.2f bom aproveitamento.", media);
    }
    else
    {
        return printf("Media %.2f mal aproveitamento.", media);
    }

    return 0;
}