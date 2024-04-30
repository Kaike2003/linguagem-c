#include <stdio.h>

int main()
{

    float quantidadeDias, quantidadeCigarros, totalCigarros, anosFumados, diasPerdidos, minutosPerdidos;

    printf("Quantidade de cigarros fumados por dia:\n");
    scanf("%f", &quantidadeCigarros);

    printf("Quantidade de anos fumados:\n");
    scanf("%f", &anosFumados);

    quantidadeDias = quantidadeCigarros * 365;
    totalCigarros = quantidadeDias * quantidadeCigarros;
    minutosPerdidos = totalCigarros * 10;
    diasPerdidos = minutosPerdidos / 1440;

    printf("Dias de vida perdidos %.2f", diasPerdidos);

    return 0;
}