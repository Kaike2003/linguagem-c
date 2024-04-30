#include <stdio.h>

int main()
{

    int i = 1, pares = 0, impares = 0, valor = 0;

    while (i <= 6)
    {
        printf("Digite o %d numero: \n", i);
        scanf("%d", &valor);

        if (valor % 2 == 0)
        {
            pares += 1;
        }
        else
        {
            impares += 1;
        }

        i += 1;
    }

    printf("Pares %d \n Impares %d", pares, impares);

    return 0;
}