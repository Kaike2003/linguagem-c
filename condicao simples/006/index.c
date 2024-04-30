#include <stdio.h>
#include <time.h>

int main()
{

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int ano = tm.tm_year + 1900;
    int anoNascimento, idade;

    printf("Digite sua data de nascimento:\n");
    scanf("%d", &anoNascimento);

    idade = ano - anoNascimento;

    if (idade >= 18)
    {
        return printf("Ja se passou %d do alistamento militar", idade-18);
    }
    else
    {
        return printf("Falta %d anos para alistamento militar", idade-18);
    }

    return 0;
}