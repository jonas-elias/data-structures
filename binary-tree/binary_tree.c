#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *direita, *esquerda;
} NoArvore;

NoArvore *inserir_elemento(NoArvore *no, int elemento)
{
    if (no == NULL)
    {
        NoArvore *aux = malloc(sizeof(NoArvore));
        aux->valor = elemento;
        aux->esquerda = NULL;
        aux->direita = NULL;

        return aux;
    }
    else
    {
        if (elemento < no->valor)
        {
            no->esquerda = inserir_elemento(no->esquerda, elemento);
        }
        else
        {
            no->direita = inserir_elemento(no->direita, elemento);
        }
        return no;
    }
}

void imprimir_arvore(NoArvore *raiz)
{
    if (raiz)
    {
        printf("%d\n", raiz->valor);
        imprimir_arvore(raiz->esquerda);
        imprimir_arvore(raiz->direita);
    }
}

void main()
{
    NoArvore *raiz = NULL;
    int opcao, valor;

    do
    {
        printf("0 - sair\n1 - inserir\n2 - imprimir elementos\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nDigite um valor: ");
            scanf("%d", &valor);
            raiz = inserir_elemento(raiz, valor);
            break;
        case 2:
            printf("Impressao recursiva:\n");
            imprimir_arvore(raiz);
        default:
            break;
        }
    } while (opcao != 0);
}