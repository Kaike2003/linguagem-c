#include <stdio.h>

int main()
{

    int i = 30;

    while (i >= 0)
    {
        
        if (i % 4 == 0)
        {
            printf("[%d] ", i);
        }

        i -= 1;
    }
}