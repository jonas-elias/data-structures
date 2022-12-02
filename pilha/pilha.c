// empilhar valores inteiros
#include <stdio.h>

struct No
{
    int numero;
    struct No *atual;
};
typedef struct No no;

int tam;
// Interfaces
int menu(void);
void inicia(no *PILHA);
void opcao(no *PILHA, int op);
void exibe(no *PILHA);
void libera(no *PILHA);
void empilhar(no *PILHA);
no *desempilhar(no *PILHA);

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

void opcao(no *PILHA, int op)
{
    no *temp;
    switch (op)
    {
    case 0:
        libera(PILHA);
        break;
    case 1:
        libera(PILHA);
        inicia(PILHA);
        break;
    case 2:
        exibe(PILHA);
        break;
    case 3:
        empilhar(PILHA);
        break;
    case 4:
        temp = desempilha(PILHA);
        // faltou completar
        break;
    default:
        printf("\n Comando invalido. \n\n");
    }
}

// inicia a pilha e aponta o seu ponteiro *atual para NULL
void inicia(no *PILHA)
{
    PILHA->atual = NULL;
    tam = 0;
}

// verifica se a nossa pilha esta vazia
int vazia(no *PILHA)
{
    if (PILHA->atual == NULL)
        return 1;
    else
        return 0;
}

// Alocar um espaço na memória
no *aloca()
{
    no *novo = (no *)malloc(sizeof(no));

    if (!novo)
    {
        printf("\n Sem memoria disponivel para alocacao.\n");
        exit(1);
    }
    else
    {
        printf("\n Informe um novo numero a ser empilhado:");
        scanf("%d", &novo->numero);

        return novo; // eh um ponteiro (aka endereco)
    }
}

void libera(no *PILHA)
{
    if (!vazia(PILHA))
    {
        // dois ponteiros: 1 para saber o elemento atual e outro para o próximo elemento
        no *proximoNo, *noAtual;

        noAtual = PILHA->atual;

        while (noAtual != NULL)
        {
            proximoNo = noAtual->atual;
            free(noAtual);
            noAtual = proximoNo;
        }
    }
}

void exibe(no *PILHA)
{
    if (vazia(PILHA))
    {
        printf("Pilha vazia\n\n");
        return;
    }

    no *aux;
    aux = PILHA->atual;

    while (aux != NULL)
    {
        printf("%5d", aux->numero);
        aux = aux->atual;
    }
}

void empilhar(no *PILHA)
{
    no *novo = aloca();

    novo->atual = NULL;

    if (vazia(PILHA))
    {
        PILHA->atual = novo;
    }
    else
    {
        no *aux = PILHA->atual;
        while (aux != NULL)
        {
            aux = aux->atual;
        }

        aux->atual = novo;
    }
}

void desempilhar(no *PILHA)
{
    if (PILHA->atual == NULL)
    {
        return NULL;
    }
    else
    {
        no *ultimo = PILHA->atual, *penultimo = PILHA;

        while (ultimo != NULL)
        {
            penultimo = ultimo;
            ultimo = ultimo->atual;
        }

        penultimo->atual = NULL;
        return ultimo;
    }
}