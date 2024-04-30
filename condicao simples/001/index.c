#include <stdio.h>

int main()
{

    float velocidade, multa;

    printf("Digite a velocidade \n");
    scanf("%f", &velocidade);

    if (velocidade >= 80)
    {
        multa = (velocidade * 80) - 5;
        return printf("Velocidade acima do limite, sua multa eh de %.2fkz", multa);
    }
    else
    {
        return printf("Sem nenhuma multa para passar...");
    }

    return 0;
}
