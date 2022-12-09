#include <stdio.h>
#include <stdlib.h>
struct lista
{
    int matricula;
    struct lista *proximo;
};

typedef struct lista Lista;

/* Função de inicialização: retorna uma lista vazia */
Lista *inicializa(void)
{
    return NULL;
}

/* Inserção no início: retorna a lista atualizada */
Lista *insere(Lista *l, int i)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->matricula = i;
    novo->proximo = l;

    return novo;
}

/* Função imprime: imprimir os valores dos elementos*/
void imprime(Lista *l)
{
    Lista *p; // variável para percorrer a lista
    for (p = l; p != NULL; p = p->proximo)
    {
        printf("\n Matricula: %d \n", p->matricula);
    }
}

/* Função vazia: retorna 1 se vazia ou retorna 0 se não vazia*/
int vazia(Lista *l)
{
    if (l == NULL)
        return 1;
    else
        return 0;

    // return (l == NULL);
}

Lista *ordenar(Lista *l)
{
    Lista *lista_1;
    Lista *lista_2;
    int cont = 0;
    for (lista_1 = l; lista_1 != NULL; lista_1 = lista_1->proximo)
    {
        for (lista_2 = l; lista_2 != NULL; lista_2 = lista_2->proximo)
        {
            if (lista_1->matricula < lista_2->matricula)
            {
                int temp = lista_1->matricula;
                lista_1->matricula = lista_2->matricula;
                lista_2->matricula = temp;
            }
        }
    }

    return l;
}

/* Função retira: retira elemento da lista */
Lista *retira(Lista *l, int v)
{
    Lista *anterior = NULL; // ponteiro para elemento anterior
    Lista *p = l;           // ponteiro para percorrer a lista

    while (p != NULL && p->matricula != v)
    {
        anterior = p;
        p = p->proximo;
    }

    if (p == NULL)
    {
        return l;
    }
    if (anterior == NULL)
    {
        l = p->proximo;
    }
    else
    {
        anterior->proximo = p->proximo;
    }
    free(p);
    return l;
}

int main(void)
{
    Lista *l;         // declara uma lista não inicializada
    l = inicializa(); // inicializa lista como vazia
    l = insere(l, 4); // insere na lista o elemento 4
    l = insere(l, 8); // insere na lista o elemento 8
    // imprime(l);
    l = insere(l, 10);
    l = insere(l, 5);
    l = retira(l, 8);
    // imprime(l);
    l = ordenar(l);
    imprime(l);
    return 0;
}