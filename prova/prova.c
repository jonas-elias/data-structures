#include <stdio.h>
#include <string.h>

typedef struct
{
    char logradouro[50];
    char complemento[50];
    int cep;
} tipoEndereco;

typedef struct
{
    char nome[40];
    char cpf[11];
    char senha[24];
    float saldo;
    tipoEndereco endereco;
} contaBancaria;

contaBancaria conta[3];

void registraConta()
{
    int array = sizeof(conta);
    int index = sizeof(conta[0]);

    int quantidadeContas = array / index;

    for (int i = 0; i < quantidadeContas; i++)
    {
        printf("Digite o nome:\n");
        fflush(stdin);
        fgets(conta[i].nome, 40, stdin);
        printf("Digite o cpf:\n");
        fflush(stdin);
        fgets(conta[i].cpf, 11, stdin);
        printf("Digite a senha:\n");
        fflush(stdin);
        fgets(conta[i].senha, 24, stdin);
        printf("Digite o logradouro:\n");
        fflush(stdin);
        fgets(conta[i].endereco.logradouro, 50, stdin);
        printf("Digite o complemento:\n");
        fflush(stdin);
        fgets(conta[i].endereco.complemento, 50, stdin);
        printf("Digite o cep:\n");
        scanf("%d", &conta[i].endereco.cep);
    }
}

void depositaValor()
{
    float valor = 0;
    char numeroConta[11];

    printf("Numero da conta (CPF):\n");
    fflush(stdin);
    fgets(numeroConta, 11, stdin);

    int array = sizeof(conta);
    int index = sizeof(conta[0]);

    int quantidadeContas = array / index;

    for (int i = 0; i < quantidadeContas; i++)
    {
        if (!strncmp(conta[i].cpf, numeroConta, 11))
        {
            printf("Deposite o valor:\n");
            fflush(stdin);
            scanf("%f", &valor);
            conta[i].saldo += valor;
            printf("Depositado com sucesso!\n");
        }
    }

    if (valor == 0)
    {
        printf("Conta nao encontrada!!");
    }
}

void consultaSaldo()
{
    char senha[24];
    int found = 0;

    int array = sizeof(conta);
    int index = sizeof(conta[0]);

    int quantidadeContas = array / index;

    printf("Digite a senha:\n");
    fflush(stdin);
    fgets(senha, 24, stdin);

    for (int i = 0; i < quantidadeContas; i++)
    {
        if (!strncmp(senha, conta[i].senha, 24))
        {
            found = 1;
            printf("Nome: %s \n", conta[i].nome);
            printf("Cpf: %s \n", conta[i].cpf);
            printf("Logradouro: %s \n", conta[i].endereco.logradouro);
            printf("Complemento: %s \n", conta[i].endereco.complemento);
            printf("Cep: %d \n\n", conta[i].endereco.cep);
            printf("SALDO: %f", conta[i].saldo);
        }
    }

    if (!found) {
        printf("Senha nao encontrada!\n");
    }
}

void main()
{
    registraConta();

    int action = 1;
    while (action != 0)
    {
        printf("\n\n\nDeseja realizar alguma acao??\n");
        printf("DEPOSITAR       -------------- 1\n");
        printf("CONSULTAR SALDO -------------- 2\n");
        scanf("%d", &action);
        if (action == 1)
        {
            depositaValor();
        }
        else if (action == 2)
        {
            consultaSaldo();
        } else {
            action = 0;
        }
    }
}