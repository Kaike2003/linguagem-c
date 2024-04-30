#include <stdio.h>

int main()
{

    int i = 1, termino = 5;
    float peso, altura, quantidadeAltura = 0, pesoAcimaQuantidade, pesoAlturaQuantidade = 0, pesoAbaixoQuantidade = 0;

    while (i <= termino)
    {

        printf("Digite o peso e altura da %d pessoa: \n", i);
        scanf("%f %f", &peso, &altura);

        quantidadeAltura += altura;

        if (peso > 90)
        {
            pesoAcimaQuantidade += 1;
        }

        if (peso < 90)
        {
            pesoAbaixoQuantidade += 1;
        }

        if (altura > 1.90 || peso > 100)
        {
            pesoAlturaQuantidade += 1;
        }

        i += 1;
    }

    printf("Media de altura %f \n ", quantidadeAltura / termino);
    printf("+ 90kg %f \n", pesoAcimaQuantidade);
    printf("- 50kg %f \n", pesoAbaixoQuantidade);
    printf("1.90m ou 100kg %f \n", pesoAlturaQuantidade);

    return 0;
}