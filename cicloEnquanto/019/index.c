#include <stdio.h>

int main()
{

    int i = 1, termino = 5, numero;

    while (i <= termino)
    {

        printf("Digite um numero: \n");
        scanf("%d", &numero);

        if (numero == 1111)
        {
            return i = 6;
        }

        i += 1;
    }

    return 0;
}