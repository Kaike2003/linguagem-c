#include <stdio.h>

int fibo(int n)
{
    int F = 0;
    int ant = 0;

    for (int i = 0; i <= n; i++)
    {

        if (i == 1)
        {
            F = 1;
            ant = 0;
        }
        else
        {
            F += ant;
            ant = F - ant;
        }
    }

    return F;
}

int main()
{

    for (int i = 0; i < 30; i++)
    {
        printf("%d ", fibo(i));
    }
}