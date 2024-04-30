#include <stdio.h>

int main()
{

    char nome[200];
    float salario, aumento;

    printf("Digite o nome:\n");
    scanf("%s", nome);

    printf("Digite o salario\n");
    scanf("%f", &salario);

    aumento = salario + (salario * 1.15);

    printf("Salario: %fkz e aumento %fkz", salario, aumento);

    return 0;

}