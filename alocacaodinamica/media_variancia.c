#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculoMedia(float *v, int qtd)
{
    float media = 0.0;
    for (int i = 0; i < qtd; i++)
    {
        media += *(v + i);
    }

    return media / qtd;
}

float variancia(float *v, float media, int qtd)
{
    float variancia = 0.0;
    for (int i = 0; i < qtd; i++)
    {
        variancia += (*(v + i) - media) * (*(v + i) - media);
    }

    return variancia / (qtd - 1);
}

void main()
{
    int qtd;
    printf("Digite o numero de valores que serao recebidos\n");
    scanf("%d", &qtd);

    float *v;
    v = malloc(qtd * sizeof(float));

    if (v)
    {
        printf("Memoria alocada\n");
        float nota, media;
        for (int i = 0; i < qtd; i++)
        {
            scanf("%f", &nota);
            *(v + i) = nota;
        }

        media = calculoMedia(v, qtd);
        printf("media: %f\n", media);

        printf("variancia: %f", variancia(v, media, qtd));
    }
}