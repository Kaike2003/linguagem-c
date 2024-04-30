#include <stdio.h>
#include <string.h>

int main()
{

    int sexo;
    char nome[200];
    float preco, desconto, aux;

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite seu sexo: \n 1- masculino \n 2- femenino \n");
    scanf("%d", &sexo);

    printf("Digite o valor das compras:\n");
    scanf("%f", &preco);

    if (1 == sexo)
    {
        aux = preco * 0.05;
        desconto = preco - aux;

        return printf("%s valor das compras eh %.2f mas com o desconto fica %.2fkz", nome, preco, desconto);
    }
    else
    {

        if (2 == sexo)
        {

            aux = preco * 0.13;
            desconto = preco - aux;
            return printf("%s valor das compras eh %.2f mas com o desconto fica %.2fkz", nome, preco, desconto);
        }
        else
        {
            return printf("Sexo invalido");
        }
    }

    return 0;
}