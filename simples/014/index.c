#include <stdio.h>

int main()
{

    int dias;
    float distancia, total;

    printf("Digite a distancia \n");
    scanf("%f", &distancia);

    printf("Digite a quantidade de dias \n");
    scanf("%d", &dias);

    total = 90 * dias + 0.20 * distancia;

    printf("O total a se pagar pelo aluger do carro eh de %2.fkz", total);

    return 0;
}