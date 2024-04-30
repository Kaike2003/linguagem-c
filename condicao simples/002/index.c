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
        return printf("Tens %d anos podes votar", idade);
    }
    else
    {
        return printf("Tens %d anos nao podes votar", idade);
    }

    return 0;
}