#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *v;
    v = (int *) malloc(10*sizeof(int));

    printf("%x\n", v);
    free(v);
}