#include <stdio.h>

int main()
{

    int i = 0, valor, maior = 0, menor = 0;

    while (i <= 8)
    {
        printf("Digite o %d numero: \n", i);
        scanf("%d", &valor);

        if (valor > maior)
        {
            maior = valor;
        }

        if (valor < menor)
        {
            menor = valor;
        }
        i += 1;
    }

    printf("Maior %d \n Menor %d", maior, menor);
}