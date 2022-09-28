#include <stdio.h>

void main()
{
    int *p;
    int a = 220;
    int b = 330;

    printf("\n &a vale %x :", &a);
    printf("\n &b vale %x :", &b);
    printf("\n &p vale %x :", &p);

    p = &a;

    printf("\n &p vale %x :", p);
    printf("\n p vale %d :", *p);

    *p = 500; // desreferenciar p
    printf("\n a vale %d :", a);
    // printf("\n p vale %d :", *p);
}