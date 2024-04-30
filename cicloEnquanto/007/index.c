#include <stdio.h>

int main()
{

    int inicio, termino, incremento;

    printf("Digite o valor inicial, incremento e termino do ciclo:  \n");
    scanf("%d %d %d", &inicio, &incremento, &termino);

    if (inicio >= termino)
    {
        printf("O valor inicial nao pode ser maior ou igual ao de termino");
    }
    else
    {

        while (inicio <= termino)
        {
            printf("%d ", inicio);
            inicio += incremento;
        }
    }

    return 0;
}