#include <stdio.h>

int main()
{

    float numero, dobro, terca_parte;

    printf("Digite um numero: \n");
    scanf("%f", &numero);

    dobro = numero * 2;
    terca_parte = numero / 3;

    printf("O dobro do numero %.2f eh: %.2f\n", numero, dobro);
    printf("A terca parte do numero %.2f eh: %.2f\n", numero, terca_parte);

    return 0;
}