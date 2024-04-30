#include <stdio.h>

int main()
{

    int i = 0, valor, subtracao = 0;

    while (i <= 6)
    {
        printf("Digite o %d numero: \n", i + 1);
        scanf("%d", &valor);

        subtracao -= valor;
        i += 1;
    }

    printf("Soma = %d", subtracao);
}