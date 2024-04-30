#include <stdio.h>

int main()
{

    int i = 1, termino = 5, sexo = 0, idade = 0, quantidadeHomem = 0, quantidadeMulher = 0, quantidadeIdadeHomem = 0, mulheresMasVelhas = 0;

    while (i <= termino)
    {
        printf("Digite o sexo e idade da %d pessoa. \n 1 - masculino \n 2 - femenino \n \n", i);
        scanf("%d %d", &sexo, &idade);

        if (sexo == 1)
        {
            quantidadeIdadeHomem += idade;
            quantidadeHomem += 1;
        }
        else if (sexo == 2)
        {
            quantidadeMulher += 1;

            if (idade > 20)
            {
                mulheresMasVelhas += 1;
            }
        }
        else
        {
            return printf("Opcao de sexo invalida");
        }

        i += 1;
    }

    printf("Total homens %d \n", quantidadeHomem);
    printf("Total Mulheres %d \n", quantidadeMulher);
    printf("Media %d \n", quantidadeIdadeHomem / quantidadeHomem);
    printf("Mulheres acima de 20 %d \n", mulheresMasVelhas);
}
