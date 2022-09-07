#include <stdio.h>

void main()
{
    int num;

    printf("Digite um número\n");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i * num);
    }
}