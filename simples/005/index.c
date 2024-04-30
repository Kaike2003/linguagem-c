#include <stdio.h>

int main()
{

    int num1, num2, soma;

    printf("Digite o 1º numero:");
    scanf("%d", &num1);

    printf("Digite o 2º numero:");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("%d + %d =  %d", num1, num2, soma);

    return 0;

}