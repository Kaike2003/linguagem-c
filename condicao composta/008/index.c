#include <stdio.h>

int main()
{

    float casa, salario, anos, prestacao, quantPrestacao;

    printf("Digite o valor da casa: \n");
    scanf("%f", &casa);

    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    printf("Digite quantos anos vai pagar: \n");
    scanf("%f", &anos);

    quantPrestacao = anos * 12;
    prestacao = casa / quantPrestacao;

    if (salario * 0.3 > prestacao)
    {
        printf("Seu emprestimo bancario foi aprovado");
        printf("Prestacao mensal %f em anos %f", prestacao, anos);
    }
    else
    {
        printf("Infelizmente você não foi aprovado para o empréstimo, sentimos muito");
    }
}