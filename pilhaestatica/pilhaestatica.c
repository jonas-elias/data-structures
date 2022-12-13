/**
 * @file pilhaestatica.c
 * @author <jonas-elias/>
 * @date 2022-12-13
 */

/**
 * Importação das bibliotecas padrões de desenvolvimento na linguagem C
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Constante que será atribuída ao número total de itens que podem ser armazenados na pilha
 */
#define N 3

/**
 * Struct que irá definir o vetor dos dados inteiros e a quantidade
 * da pilha (será atualizada a cada novo evento na execução do programa)
 */
struct Pilha
{
    int dados[N];
    int qtd_pilha;
};
typedef struct Pilha pilha;

/**
 * Função para inicialização de todos os índices da estrutura
 * passada no parâmetro
 *
 * @param p pilha
 */
void inicializa(pilha *p)
{
    for (int i = 0; i < N; i++)
    {
        p->dados[i] = 0;
    }
    p->qtd_pilha = 0;
}

/**
 * Função para verificar se a pilha está vazia
 *
 * @param p pilha
 */
void vazia(pilha *p)
{
    if (p->qtd_pilha == 0)
    {
        printf("Pilha vazia\n");
        return;
    }
}

/**
 * Função que irá empilhar os valores no vetor. Caso o número total de valores na pilha
 * seja >= que a constante definida (N), a pilha irá pular a instrução de empilhamento (Pilha cheia).
 *
 * @param p pilha
 * @param valor valorNumérico
 */
void empilha(pilha *p, int valor)
{
    if (p->qtd_pilha < N)
    {
        p->dados[p->qtd_pilha] = valor;
        p->qtd_pilha++;
        return;
    }
    printf("Pilha cheia\n");
}

/**
 * Função que irá exibir os valores contidos na pilha.
 *
 * @param p
 */
void exibe(pilha *p)
{
    vazia(p);
    for (int i = 0; i < p->qtd_pilha; i++)
    {
        printf("%d\n", p->dados[i]);
    }
}

/**
 * Função para desempilhar o último elemento adicionado na pilha.
 *
 * @param p pilha
 */
void desempilhar(pilha *p)
{
    p->qtd_pilha--;
    p->dados[p->qtd_pilha] = 0;
}

/**
 * Função para remover todos os elementos da pilha.
 * Enquanto a quantidade de elementos na pilha, for != 0
 * irá atribuir o valor inteiro 0 para os índices e diminuir
 * a quantidade de elementos contidos na pilha (qtd_pilha).
 *
 * @param p pilha
 */
void libera(pilha *p)
{
    while (p->qtd_pilha != 0)
    {
        p->qtd_pilha--;
        p->dados[p->qtd_pilha] = 0;
    }
}

/**
 * Função main para fazer as chamadas das ações realizadas
 * por uma pilha estática.
 */
void main()
{
    /**
     * Inicialização da variável do tipo "pilha"
     */
    pilha p;
    inicializa(&p);

    /**
     * Testes...
     */
    empilha(&p, 10);
    empilha(&p, 20);
    empilha(&p, 30);
    exibe(&p);
    desempilhar(&p);
    printf("\n");
    exibe(&p);
    libera(&p);
    exibe(&p);
    empilha(&p, 40);
    empilha(&p, 50);
    exibe(&p);
}