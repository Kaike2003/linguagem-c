#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero(int base, int expoente)
{
    return printf("%d elevando %d = %.3f", base, expoente, pow(base, expoente));
}

int main()
{

    int base, expoente;

    printf("Digite a base e o expoente: \n");
    scanf("%d %d", &base, &expoente);

    numero(base, expoente);

    return 0;
}