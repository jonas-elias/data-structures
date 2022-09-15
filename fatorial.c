#include <stdio.h>

int apresentarFatorial(int num);

void main()
{
    int num;

    printf("Digite o numero para ser fatorado\n");
    scanf("%d", &num);
    printf("%d", apresentarFatorial(num));
}

int apresentarFatorial(int num)
{
    int fat = 1;

    for (int i = num; i >= 1; i--)
    {
        fat *= i;
    }

    return fat;
}