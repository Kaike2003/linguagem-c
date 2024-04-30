#include <stdio.h>

int main()
{

    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        return printf("%d numero par", numero);
    }
    else
    {
        return printf("%d numero impar", numero);
    }

    return 0;
    
}