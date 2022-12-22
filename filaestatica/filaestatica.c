/**
 * @file filaestatica.c
 * @author <jonas-elias/>
 * @date 2022-12-21
 */

/**
 * Importação das bibliotecas padrões de desenvolvimento na linguagem C
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Constante que será atribuída ao número total de itens que podem ser armazenados na filha
 */
#define N 5

/**
 * Struct que irá definir o vetor dos dados inteiros, o fim e o
 * início da fila
 */
struct Fila
{
    int dados[N];
    int fim;
    int inicio;
};
typedef struct Fila fila;

/**
 * Método de inserção que irá verificar se a fila está cheia
 * e coloca o elemento no fim da fila
 * (que é incrementada a cada nova inserção)
 *
 * @param f
 * @param elemento
 */
void insere(fila *f, int elemento)
{
    if (f->fim == N)
    {
        printf("Erro ao inserir\nFila cheia!!\n\n");
    }
    else
    {
        f->dados[f->fim] = elemento;
        f->fim = f->fim + 1;
    }
}

/**
 * Função que irá exibir os valores contidos na fila.
 *
 * @param f
 */
void exibe(fila *f)
{
    if (f->fim == f->inicio)
    {
        printf("Fila vazia.\n\n");
    }
    for (int i = f->inicio; i < f->fim; i++)
    {
        printf("%d\n", f->dados[i]);
    }
}

/**
 * Méotod que irá remover o primeiro elemento da fila
 * (ou seja, o primeiro elemento que entrou na fila)
 *
 * @param f
 */
void remover(fila *f)
{
    int resp;
    if (f->fim == f->inicio)
    {
        printf("Erro ao remover\nFila vazia\n\n");
    }
    else
    {
        resp = f->dados[f->inicio];
        f->inicio++;
        printf("Item %d removido com sucesso.\n", resp);
    }
}

/**
 * Função main
 */
void main()
{
    fila f;
    f.fim = 0;
    f.inicio = 0;
    insere(&f, 2);
    exibe(&f);
    remover(&f);
    exibe(&f);
    insere(&f, 6);
    insere(&f, 8);
    insere(&f, 4);
    insere(&f, 3);
    exibe(&f);
    remover(&f);
    remover(&f);
    remover(&f);
    exibe(&f);
}