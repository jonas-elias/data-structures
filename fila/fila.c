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

void main()
{
    printf("Teste");
}