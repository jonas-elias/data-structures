#include <stdio.h>

struct Ponto
{
    float x;
    float y;
};

typedef struct
{
    float x;
    float y;
} PontoDef;

void main()
{
    PontoDef p;

    printf("Ponto x: \n");
    scanf("%f", &p.x);
    printf("Ponto y: \n");
    scanf("%f", &p.y);

    printf("Ponto x: %.2f --- Ponto y: %.2f", p.x, p.y);
}
