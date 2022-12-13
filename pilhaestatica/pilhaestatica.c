#include <stdio.h>
#include <stdlib.h>

#define N 3

struct Pilha
{
    int dados[N];
    int qtd_pilha;
};

typedef struct Pilha pilha;

int menu(void)
{
    int opcao;

    printf("Escolha a opção desejada: \n");
    printf("0. Sair. \n");
    printf("1. Zerar a pilha. \n");
    printf("2. Exibir a pilha. \n");
    printf("3. Empilhar. \n");
    printf("4. Desempilhar. \n");
    printf("Opcao: \n");
    scanf("%d", &opcao);

    return opcao;
}

void inicializa(pilha *p)
{
    for (int i = 0; i < N; i++)
    {
        p->dados[i] = 0;
    }
    p->qtd_pilha = 0;
}

void empilha(pilha *p, int valor)
{
    if (p->qtd_pilha < N)
    {
        p->dados[p->qtd_pilha] = valor;
        p->qtd_pilha++;
    }
    else
    {
        printf("Pilha cheia");
    }
}

void exibe(pilha *p)
{
    for (int i = 0; i < p->qtd_pilha; i++)
    {
        printf("%d\n", p->dados[i]);
    }
}

void desempilhar(pilha *p)
{
    p->qtd_pilha--;
    p->dados[p->qtd_pilha] = 0;
}

void opcao(pilha *PILHA, int op)
{
    switch (op)
    {
    case 0:
        // libera(PILHA);
        break;
    case 1:
        // libera(PILHA);
        // inicializa(PILHA);
        break;
    case 2:
        // exibe(PILHA);
        break;
    case 3:
        // empilha(PILHA);
        break;
    case 4:
        // temp = desempilha(PILHA);
        // faltou completar
        break;
    default:
        printf("\n Comando invalido. \n\n");
    }
}

// void libera(pilha *p)
// {
// for (int i = 0; i < p->qtd_pilha; i++)
// {
//     free(p->dados[i]);
//     p->qtd_pilha--;
// }
// free(p);
// }

void main()
{
    pilha p;
    inicializa(&p);

    empilha(&p, 10);
    empilha(&p, 20);
    empilha(&p, 30);
    exibe(&p);
    desempilhar(&p);
    printf("\n");
    exibe(&p);
}