#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[200], pessoaMasVelha[200];
    int i = 0, termino = 1, continuar, sexo, idade, maisVelho, somaIdade, homensVelho, mulherMenor;

    while (i <= termino)
    {

        printf("Digite o nome, sexo 1 - homem ou 2 mulher e a idade: \n");
        scanf("%s %d %d", nome, &sexo, &idade);

        printf("Deseja continuar? \n1 - sim\n2 - nao \n");
        scanf("%d", &continuar);

        if (continuar == 1)
        {

            if (idade > maisVelho)
            {
                maisVelho = idade;
            }

            if (idade <= mulherMenor)
            {
                mulherMenor = idade;
            }

            if (idade > 30 && sexo == 1)
            {
                homensVelho += 1;
            }

            if (idade < 18 && sexo == 1)
            {
                mulherMenor += 1;
            }

            somaIdade += idade;
        }
        else if (continuar == 2)
        {
            i += 2;
        }
        else
        {
            printf("Opcao invalida");
            i += 2;
        }

        termino += 1;
        i += 1;
    }





    return 0;
}