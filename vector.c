#include <stdio.h>

void main()
{
    int const n = 8;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite o número %d\n", i);
        scanf("%d", &a[i]);
        b[i] = a[i] * 2;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
}
