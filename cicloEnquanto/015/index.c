#include <stdio.h>

int main()
{

    int i = 1, limite = 5, idade, somaIdade = 0, maiores, menores = 0, maiorIdade = 0;

    while (i <= limite)
    {
        printf("Idade da %d pessoa: \n", i);
        scanf("%d", &idade);

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        if (idade > 18)
        {
            maiores += 1;
        }

        if (idade < 5)
        {
            menores += 1;
        }

        somaIdade += idade;

        i += 1;
    }

    printf("Media das idades %d \n", (somaIdade) / limite);
    printf("Maior idade %d \n", maiorIdade);
    printf("Pessoas com mais de 18 anos %d \n", maiores);
    printf("Pessoas com menos de 5 anos %d \n", menores);
}