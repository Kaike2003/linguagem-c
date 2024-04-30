#include <stdio.h>
#include <stdlib.h>

int verificar(int n1, int n2, int n3)
{

    if (n1 > n2 && n1 > n3 && n2 > n3)
    {
        return printf("Maior: %d", n1);
    }
    else if (n2 > n1 && n2 > n3 && n3 > n1)
    {
        return printf("Maior: %d", n2);
    }
    else if (n3 > n2 && n3 > n1 && n1 > n2)
    {
        return printf("Maior: %d", n3);
    }
    else
    {
        return printf("Numero sao iguais");
    }

}

int main()
{

    int n1, n2, n3;

    printf("Digite o primeiro, segundo e terceiro valor\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    verificar(n1, n2, n3);

    return 0;
}
