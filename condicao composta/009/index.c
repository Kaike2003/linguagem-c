#include <stdio.h>

int main()
{

    float peso, altura, imc;

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua altura: \n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc >= 8.5 && imc <= 25)
    {
        return printf("Abaixo do peso");
    }
    else
    {

        if (imc >= 25 && imc <= 30)
        {
            return printf("Peso ideial");
        }
        else
        {

            if (imc > 40)
            {
                return printf("Obeso/a");
            }
        }
    }
}