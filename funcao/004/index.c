#include <stdio.h>
#include <stdlib.h>

int verificar(int n1)
{
    if (n1 % 2)
    {
        return printf("%d eh par", n1);
    }
    else
    {
        return printf("%d eh impar", n1);
    }
}

int main()
{

    int n1;

    printf("Digite o valor: \n");
    scanf("%d", &n1);

    verificar(n1);

    getchar();
    return 0;
}
