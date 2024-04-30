#include <stdio.h>



int main()
{

    float salario;
    char nome[100];

    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("Digite seu salario:");
    scanf("%f", &salario);

    printf("Nome %s \n", nome);
    printf("Salario %.2f \n", salario, "kz");


    return 0;
}