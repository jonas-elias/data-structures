#include <stdio.h>

void troca(int *px, int *py)
{
    int aux = *px;

    printf("valor: %x", px);

    *px = *py;
    *py = aux;
}

void main()
{
    int a = 10, b = 20;

    troca(&a, &b);

    printf("\n O valor a eh %d e o valor do b eh %d", a, b);
}