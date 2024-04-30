#include <stdio.h>
#include <stdlib.h>

int superSomador(int n1, int n2)
{

    int somador = 0;

    for (int i = n1; i <= n2; i++)
    {
        somador += i;
    }

    return somador;
}

int main()
{
    int inicio, termino;

    printf("Digite o valor de inicio e de termino:\n");
    scanf("%d %d", &inicio, &termino);

    if (inicio >= termino)
    {
        return printf("Erro o valor de inicio %d nao pode ser maior que o valor de termino %d", inicio, termino);
    }
    else
    {
        superSomador(inicio, termino);
    }

    return 0;
}