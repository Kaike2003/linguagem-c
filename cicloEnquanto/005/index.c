#include <stdio.h>

int main()
{

    int i = 0, numero;

    printf("Digite um numero positivo: \n");
    scanf("%d", &numero);

    if (numero >= 1)
    {
        while (i <= numero)
        {
            printf("%d ", i);
            i += 1;
        }
    }
    else
    {
        printf("Erro!");
    }
}