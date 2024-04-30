#include <stdio.h>

int main()
{

    float nota1, nota2, media;

    printf("Digite o primeiro numero:\n");
    scanf("%f", &nota1);

    printf("Digite o primeiro numero:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media <= 4.9)
    {
        printf("sua media eh %f e vc esta reprovado", media);

    }
    else if (media <= 5 || media <= 6.9)
    {
        printf("sua media eh %f e vc esta em recuperacao", media);
    }
    else if (media >= 7)
    {
        printf("sua media eh %f e vc esta aprovado", media);
    }

    return 0;
}