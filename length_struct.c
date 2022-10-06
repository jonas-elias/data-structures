#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
    char sexo;
} Pessoa;

void main()
{
    Pessoa pessoa;

    int a;
    printf("%d\n", sizeof(a));

    printf("%d\n", sizeof(pessoa));

    printf("%x\n", &pessoa.nome);
    printf("%x\n", &pessoa.idade);
    printf("%x\n", &pessoa.sexo);
}