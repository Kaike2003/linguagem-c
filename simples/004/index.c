#include <stdio.h>

int main()
{

    int numero, ant, suc;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    ant = numero -1;
    suc = numero + 1;

    printf("Antecessor: %d \n", ant);
    printf("Sucessor: %d \n", suc);

    return 0;
}