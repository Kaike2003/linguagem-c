#include <stdio.h>

int main()
{

    float distancia, preco;

    printf("Digite a sua distancia: \n");
    scanf("%f", &distancia);

    if (distancia >= 200)
    {
        preco = distancia * 0.05;
        printf("preco da passagem: %f", preco);
    }
    else
    {

        preco = distancia * 0.05;
        printf("preco da passagem: %f", preco);
    }

    return 0;
}