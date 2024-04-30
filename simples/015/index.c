#include <stdio.h>

int main()
{

    int dias;
    float salario;

    printf("Digite os dias:\n");
    scanf("%d", &dias);

    salario = 8*dias + 25*8;

    printf("Salario %.2fkz", salario);

    return 0;
}