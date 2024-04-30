#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0, termino = 1;
    int sexo, idade, maiorIdade, quantidadeHomem = 0, mulherJovem = 0, somaIdadeHomem = 0, continuar;

    while (i <= termino)
    {

        printf("Digite o sexo 1 - homem ou 2 - mulher e idade: \n");
        scanf("%d %d", &sexo, &idade);

        printf("1 - continuar\n 2 - nao continuar \n");
        scanf("%d", &continuar);

        if (continuar == 1)
        {

            if (idade > maiorIdade)
            {
                maiorIdade = idade;
            }

            if (sexo == 1)
            {
                somaIdadeHomem += idade;
                quantidadeHomem += 1;
            }

            if (idade < mulherJovem)
            {
                mulherJovem = idade;
            }
        }
        else if (continuar == 2)
        {

            if (idade > maiorIdade)
            {
                maiorIdade = idade;
            }

            if (sexo == 1)
            {
                somaIdadeHomem += idade;
                quantidadeHomem += 1;
            }

            if (idade < mulherJovem)
            {
                mulherJovem = idade;
            }

            i += 2;
        }
        else
        {

            if (idade > maiorIdade)
            {
                maiorIdade = idade;
            }

            if (sexo == 1)
            {
                somaIdadeHomem += idade;
                quantidadeHomem += 1;
            }

            if (idade < mulherJovem)
            {
                mulherJovem = idade;
            }

            i += 2;
        }

        termino += 1;
        i += 1;
    }

    printf("Maior idade lida: %d \n", maiorIdade);
    printf("Homens cadastrados: %d \n", quantidadeHomem);
    printf("Mulher mais jovem: %d \n", mulherJovem);
    printf("Idade media entre os homens: %d \n", somaIdadeHomem / quantidadeHomem);

    return 0;
}
