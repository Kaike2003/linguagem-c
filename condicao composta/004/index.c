#include <stdio.h>

int main()
{

    char nome[200];
    int ano;
    float salario, novoSalario, aux;

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite o seu salario:\n");
    scanf("%f", &salario);

    printf("Digite quantos anos voce trabalha na empresa:\n");
    scanf("%d", &ano);

    if (ano <= 3)
    {
        aux = salario * 0.03;
        novoSalario = salario + aux;
        printf("%s seu novo salario %.2f", nome, novoSalario);
    }
    else
    {

        if (ano > 3 && ano < 10)
        {
            aux = salario * 0.125;
            novoSalario = salario + aux;
            printf("%s seu novo salario %.2f", nome, novoSalario);
        }
        else
        {

            if (ano > 10)
            {
                aux = salario * 0.2;
                novoSalario = salario + aux;
                printf("%s seu novo salario %.2f", nome, novoSalario);
            }
        }
    }

    return 0;
}