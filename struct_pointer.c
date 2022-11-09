#include <stdio.h>

typedef struct
{
    int dia, mes, ano;
} Data;

void imprimirData(Data *ponteiro)
{
    printf("%d/%d/%d\n", ponteiro->dia, ponteiro->mes, ponteiro->ano);
}

void lerData(Data *ponteiro)
{
    printf("Dia\n");
    scanf("%d", &ponteiro->dia);
    printf("Mes\n", &ponteiro->mes);
    scanf("%d", &ponteiro->mes);
    printf("Ano\n", &ponteiro->ano);
    scanf("%d", &ponteiro->ano);
}

void main()
{
    Data data;
    Data *ponteiro;

    ponteiro = &data;
    data.dia = 23;
    data.mes = 07;
    data.ano = 2002;
    lerData(ponteiro);
    imprimirData(ponteiro);

    printf("%d/%d/%d", data.dia, data.mes, data.ano);
}