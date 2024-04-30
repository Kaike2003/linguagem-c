#include <stdio.h>

int main()
{

    int ano;

    printf("Digite o ano: \n");
    scanf("%d", &ano);

    if (ano % 400 == 0 && ano % 4 == 0 && ano % 100 == 0)
    {
        return printf("%d ano bissexto", ano);
    }
    else
    {
        return printf("%d ano nao bissexto", ano);
    }

    return 0;
}