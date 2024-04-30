#include <stdio.h>

int main()
{

    float altura, largura, area, quantidade;

    printf("Digite a altura: \n");
    scanf("%f", &altura);

    printf("Digite a largura: \n");
    scanf("%f", &largura);
    
    area = largura * altura;
    quantidade = area / 2;

    printf("Eh necessario %f litros de tinta para pintar", quantidade);


    return 0;
}