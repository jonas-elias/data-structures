#include <stdio.h>

void main()
{
    int number;

    printf("Input a number\n");
    scanf("%d", &number);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i * number);
    }
}