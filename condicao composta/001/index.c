#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%d",&num1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d > %d", num1, num2);
    }
    else
    {
        printf("%d < %d", num1, num2);
    }

    return 0;
}