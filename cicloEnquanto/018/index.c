#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int i = 4, termino = 1, numero, numero_aletorio;

    srand(time(NULL));

    while (i >= termino)
    {

        numero_aletorio = rand() % 10;

        printf("%d tentiva, digite o numero sorteado \n", i);
        scanf("%d", &numero);

        if (numero_aletorio == numero)
        {
            i = 5;
            return printf("Valor certo %d", numero);
        }

        i -= 1;
    }

    return 0;
}