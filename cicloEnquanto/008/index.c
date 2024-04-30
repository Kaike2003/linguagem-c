#include <stdio.h>

int main()
{

    int i = 0, somatorio;

    while (i <= 100)
    {
        printf("%d ", i + i);
            somatorio = i + i;
        i += 2;
    }

    printf("%d", somatorio);

    return 0;
}