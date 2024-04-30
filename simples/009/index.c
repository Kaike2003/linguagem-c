#include <stdio.h>

int main()
{

    float dinheiro, comprar;

    printf("Digite o seu dinheiro:\n");
    scanf("%f", &dinheiro);

    comprar = (1 * dinheiro) / 3.45;

    printf("Com %f reais podes comprar %f dolares", dinheiro, comprar);

    return 0;
}