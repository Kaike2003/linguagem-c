#include <stdio.h>

int main()
{

    int TipoCarro, dias;
    float distancia;

    printf("Digite o tipo de carro: \n");
    printf("1 - carro luxo \n");
    printf("2 - carro popular \n");
    scanf("%d", &TipoCarro);

    printf("Digite a sua distancia \n");
    scanf("%f", &distancia);

    printf("Digite os dias do alugel do carro: \n");
    scanf("%d", &dias);

    if (TipoCarro == 1)
    {

        if (distancia <= 200)
        {
            return printf("Deve pagar %.2f kz", (distancia * 0.30) + (dias * 150));
        }
        else if (distancia > 100)
        {
            return printf("Deve pagar %.2f kz", (distancia * 0.25) + (dias * 150));
        }
        else
        {
            return printf("Erro!");
        }
    }
    else if (TipoCarro == 2)
    {

        if (distancia <= 100)
        {
            return printf("Deve pagar %.2f kz", (distancia * 0.20) + (dias * 90));
        }
        else if (distancia > 100)
        {
            return printf("Deve pagar %.2f kz", (distancia * 0.10) + (dias * 90));
        }
        else
        {
            return printf("Erro!");
        }
    }
    else
    {
        return printf("Escolha de carro invalida");
    }

    return 0;
}