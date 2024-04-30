#include <stdio.h>

int main()
{

    float ladoA, ladoB, ladoC;

    printf("Digite o lado A:\n");
    scanf("%f", &ladoA);

    printf("Digite o lado B:\n");
    scanf("%f", &ladoB);

    printf("Digite o lado C:\n");
    scanf("%f", &ladoC);

    if (ladoA == ladoB && ladoA == ladoC && ladoB == ladoC)
    {
        printf("Equilatero");
    }
    else if (ladoA == ladoA || ladoB == ladoC || ladoB == ladoC)
    {
        printf("Isosceles");
    }
    else
    {

        if (ladoA != ladoB || ladoA != ladoC || ladoB != ladoC)
        {
            printf("Escaleno");
        }
    }

    return 0;
}