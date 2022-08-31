#include <stdio.h>

void main()
{
    int number = 0;

    printf("Input a number: ");
    scanf("%d", &number);

    if ((number % 2) == 0)
    {
        printf("Number/0");
        return;
    }

    printf("Number/1");
}