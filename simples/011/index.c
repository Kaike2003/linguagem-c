#include <stdio.h>
#include <math.h>

int main()
{

    float valorA, valorB, valorC, raiz, delta, x1, x2;

    printf("Digite o valor de a: \n");
    scanf("%f", &valorA);

    printf("Digite o valor de b: \n");
    scanf("%f", &valorB);

    printf("Digite o valor de c: \n");
    scanf("%f", &valorC);

    delta = (pow(valorB, 2)) - (4 * valorA * valorC);
    raiz = sqrt(delta);

    x1 = (-valorB + raiz) / 2 * valorA;
    x2 = (-valorB - raiz) / 2 * valorA;

    printf("Delta: %.2fx1: %.2f  x2: %.2f", delta, x1, x2);

    return 0;
}