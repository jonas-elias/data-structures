#include <stdio.h>

typedef struct
{
    int dia, mes, ano;
} DataNasc;

typedef struct
{
    DataNasc data;
    char nome[50];
    int idade;
    char sexo;
} Pessoa;

Pessoa getData(Pessoa pessoa)
{
    scanf("%d%d%d", &pessoa.data.dia, &pessoa.data.mes, &pessoa.data.ano);
    return pessoa;
}

void show(Pessoa pessoa)
{
    printf("%d/%d/%d", pessoa.data.dia, pessoa.data.mes, pessoa.data.ano);
}

void main()
{
    Pessoa pessoa;
    printf("Digite o dia mes e ano de nascimento\n");
    pessoa = getData(pessoa);
    show(pessoa);
}