#include <stdio.h>

int main()
{

    int i = 0, valor, somatorio = 0;

    while (i <= 6)
    {
        printf("Digite o %d numero: \n", i + 1);
        scanf("%d", &valor);

        somatorio += valor;
        i += 1;
    }

    printf("Soma = %d", somatorio);
}