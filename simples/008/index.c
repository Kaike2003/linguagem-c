#include <stdio.h>

int main()
{

    float numero, km, hm, dam, cm, dm, mm;

    printf("Digite a distancia em metros: \n");
    scanf("%f", &numero);

    km = numero / 1000;
    hm = numero / 100;
    dam = numero / 10;

    cm = numero * 10;
    dm = numero * 100;
    mm = numero * 1000;

    printf("A distancia de %fm corresponde a %.2fkm\n", numero, km);
    printf("A distancia de %fm corresponde a %.2fhm\n", numero, hm);
    printf("A distancia de %fm corresponde a %.2fdam\n", numero, dam);

    printf("A distancia de %fm corresponde a %.2fcm\n", numero, cm);
    printf("A distancia de %fm corresponde a %.2fdm\n", numero, dm);
    printf("A distancia de %fm corresponde a %.2fmm\n", numero, mm);

    return 0;
}