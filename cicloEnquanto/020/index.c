#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{

    int sexo;
    float salario, totalSalarioHomem = 0, totalSalarioMulher = 0;
    int i = 0, termino = 1, continuar;

    while (i <= termino)
    {
        printf("Digite o sexo  1 - homem ou 2 - mulher e salario: \n");
        scanf("%d %f", &sexo, &salario);

        printf("Deseja continuar? \n 1 - sim \n 2 - nao \n");
        scanf("%d", &continuar);

        if (continuar == 1)
        {

            if (sexo == 1)
            {

                totalSalarioHomem += salario;
            }
            else if (sexo == 2)
            {
                totalSalarioMulher += salario;
            }
            else
            {
                printf("Opcao de sexo invalida");
            }

            termino += 1;
            i += 1;
        }
        else if (continuar == 2)
        {

            if (sexo == 1)
            {

                totalSalarioHomem += salario;
            }
            else if (sexo == 2)
            {
                totalSalarioMulher += salario;
            }
            else
            {
                printf("Opcao de sexo invalida");
            }

            i += 2;
        }
        else
        {
            printf("Opcao invalida");
        }
    }

    printf("Salario pago aos homens: %.2f \n", totalSalarioHomem);
    printf("Salario pago aos mulheres: %.2f", totalSalarioMulher);

    return 0;
}