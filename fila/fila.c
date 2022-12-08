#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no
{
    float elemento;
    struct no *proximo;
};

typedef struct no No;

struct fila
{
    No *inicio;
    No *fim;
};

Fila *
cria()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    return f;
}

No *insere_fim(No *fim, float valor)
{
    No *p = (No *)malloc(sizeof(No));
    p->elemento = valor;
    p->proximo = NULL;

    if (fim != NULL)
    {
        fim->proximo = p;
    }

    return p;
}

No *retira_inicio(No *inicio)
{
    No *p = inicio->proximo;
    free(inicio);
    return p;
}

void insere(Fila *f, float valor)
{
    f->fim = insere_fim(f->fim, valor);

    if (f->inicio == NULL)
    {
        f->inicio = f->fim;
    }
}

int vazia(Fila *f)
{
    return (f->inicio == NULL);
}

float retira(Fila *f)
{
    if (vazia(f))
    {
        printf("Fila esta vazia\n");
        exit(1);
    }

    float valor;
    valor = f->inicio->elemento;

    f->inicio = retira_inicio(f->inicio);

    if (f->inicio = NULL)
    {
        f->fim = NULL;
    }

    return valor;
}

void libera(Fila *f)
{
    No *liberando = f->inicio;

    while (liberando != NULL)
    {
        No *auxProximo = liberando->proximo;
        free(liberando);
        liberando = auxProximo;
    }

    free(f);
}

void imprime(Fila *f)
{
    No *itens;

    for (itens = f->inicio; itens != NULL; itens = itens->proximo)
    {
        printf("%2.f\n", itens->elemento);
    }
}

void main()
{
    Fila *f = cria();
    insere(f, 2.1);
    insere(f, 3.1);
    insere(f, 4.1);

    imprime(f);

    printf("Primeiro elemento: %f \n", retira(f));
}