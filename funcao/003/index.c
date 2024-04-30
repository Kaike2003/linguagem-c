#include <stdio.h>
#include <stdlib.h>

int comparar(int n1, int n2)
{

    if (n1 > n2)
    {
        return printf("%d > %d", n1, n2);
    }
    else if (n1 < n2)
    {
        return printf("%d < %d", n1, n2);
    }
    else
    {
        return printf("%d = %d", n1, n2);
    }
}

int main()
{

    int n1, n2;

    printf("Digite o primeiro numero e o segundo numero: \n");
    scanf("%d %d", &n1, &n2);

    comparar(n1, n2);

    return 0;
}