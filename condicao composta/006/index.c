#include <stdio.h>

int main()
{

    int jogador1, jogador2;

    printf("Jogador1\n");
    printf("0 - pedra\n");
    printf("1 - papel\n");
    printf("2 - tesoura\n");
    scanf("%d", &jogador1);

    printf("Jogador1\n");
    printf("0 - pedra\n");
    printf("1 - papel\n");
    printf("2 - tesoura\n");
    scanf("%d", &jogador2);

    if (0 <= jogador1 && 0 <= jogador2)
    {

        if (jogador1 == jogador2)
        {
            printf("Empate! Ninguem ganhou!");
        }
        else
        {
            if (jogador1 - jogador2 == -2 || jogador1 - jogador2 == 1)
            {
                printf("Jogador 1 ganhou");
            }
            else
            {
                printf("Jogador 2 ganhou");
            }
        }
    }
    else
    {
        printf("Opcao invalida");
    }

    return 0;
}