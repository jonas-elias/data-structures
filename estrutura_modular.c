#include <stdio.h>

void apresentaTabuada(int num);

void main()
{
    int num;
    printf("Informe um numero para a tabuada\n");
    scanf("%d", &num);

    apresentaTabuada(num);
}

void apresentaTabuada(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, (num * i));
    }
}
