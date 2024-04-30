#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2)
{

    return n1 + n2;
}

int main()
{

    int n1, n2;

    printf("Digite o primeiro e o segundo numero:\n");
    scanf("%d %d", &n1, &n2);

    printf("\n%d + %d = %d", n1, n2, soma(n1, n2));

    return 0;
}