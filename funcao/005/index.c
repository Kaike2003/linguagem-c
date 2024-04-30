#include <stdio.h>
#include <stdlib.h>

int fibo(int valor)
{

    int res = 0, ant = 0;

    for (int i = 0; i <= valor; i++)
    {

        if (i == 1)
        {
            res = 1;
            ant = 0;
        }
        else
        {
            res += ant;
            ant = res - ant;
        }
    }

    return res;
}

int main()
{

    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", fibo(i));
    }

    return 0;
}