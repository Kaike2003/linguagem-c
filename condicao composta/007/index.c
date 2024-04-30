#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int numero_aleatorio;
    int sorteado;

    srand(time(NULL));

    numero_aleatorio = srand();

    printf("Digite o numero:\n");
    scanf("%d", &sorteado);

    if(numero_aleatorio == sorteado){
        return "Vc acertou o valor sorteado";
    } else{
        return "Vc errou o valor sorteado";
    }


    return 0;
}