#include <stdio.h>

int main()
{

    float preco, promocao;

    printf("Digite o preco do produto \n");
    scanf("%f", &preco);

    promocao = preco - (preco * 0.05);

    printf("Preco %fkz e a promocao eh %fkz", preco, promocao);

    return 0;
}