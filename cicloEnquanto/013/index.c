#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int numeroAleatorio;
    srand(time(NULL));

    while (i <= 20)
    {
        numeroAleatorio = rand() % 10;

        printf("%d \n", numeroAleatorio);

        if (numeroAleatorio > 5)
        {
            printf("maior %d \n", numeroAleatorio);
        }

        if (numeroAleatorio % 3 == 0)
        {
            printf("divisel %d \n", numeroAleatorio);
        }

        i += 1;
    }

    return 0;
}