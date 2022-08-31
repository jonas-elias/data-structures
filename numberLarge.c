#include <stdio.h>

void main()
{
    const int SIZE = 5;
    int v[SIZE];
    int numberLarge = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Input a number\n");
        scanf("%d", &v[i]);

        if (numberLarge < v[i])
        {
            numberLarge = v[i];
        }
    }

    printf("%d", numberLarge);
}