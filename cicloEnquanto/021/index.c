#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 1, termino = 2, idade, quantidadeAluno;
    float somaIdade;

    while (i <= termino)
    {

        printf("Digite a idade: \n");
        scanf("%d", &idade);

        if (idade == 999)
        {
            i += 2;
        }
        else
        {

            somaIdade += idade;
            quantidadeAluno += 1;
            termino += 1;
            i += 1;
        }
    }

    printf("Existem na turma: %d alunos \n", quantidadeAluno);
    printf("Media das idade na turma: %.2f", somaIdade / quantidadeAluno);

    return 0;
}
