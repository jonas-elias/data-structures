#include <stdio.h>

void main()
{
#define n 3

    int cont = 0, matriz[n][n];

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            printf("Informe os elementos da matriz m[%d][%d]\n", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }
    printf("\n-----------------------------------------------\n");
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            if (matriz[x][y] == 0)
            {
                cont += 1;
            }
            printf("%d|", matriz[x][y], x, y);
        }
        printf("\n");
    }
    printf("-----------------------------------------------\n");
    printf("Quantidade de zeros: %d", cont);
}