#include <stdio.h>

int main()
{

    float largura, comprimento, area;

    printf("Digite a largura:\n");
    scanf("%f", &largura);

    printf("Digite o comprimento:\n");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    if (area <= 100)
    {
        printf("TERRENO POPULAR: %f", area);
    }
    else if (area <= 100 || area <= 500)
    {
        printf("TERRENO POPULAR: %f", area);
    }
    else
    {

        if (area >= 500)
        {
            printf("TERRENO VIP: %f", area)
;        }
    }

    return 0;
}