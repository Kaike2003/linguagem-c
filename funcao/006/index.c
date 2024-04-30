#include <stdio.h>
#include <stdlib.h>

int media(int n1, int n2)
{
    return (n1 + n2) / 2;
}

int main()
{

    int n1, n2;

    printf("Digite digite o primeiro e o segundo valor:\n");
    scanf("%d %d", &n1, &n2);

    if (n1 <= 20 && n1 >= 0)
    {

        if (n2 <= 20 && n2 >= 0)
        {

            if (media(n1, n2) >= 10)
            {
                printf("Aprovado1");
            }
            else if (media(n1, n2) <= 7)
            {
                printf("Recuperacao ou aprovado");
            }
        }
        else
        {
            printf("%d nota invalida", n2);
        }
    }
    else
    {
        printf("%d nota invalida", n1);
    }
}
