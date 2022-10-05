#include <stdio.h>

typedef struct
{
    char nome[20];
    char sexo;
    int idade;
} Pessoa;

void main()
{
    Pessoa pessoa;

    printf("Nome: \n");
    fgets(pessoa.nome, 20, stdin);
    printf("Sexo: \n");
    scanf("%c", &pessoa.sexo);
    printf("Idade: \n");
    scanf("%d", &pessoa.idade);

    printf("Nome: %s \nSexo: %c \nIdade: %d", pessoa.nome, pessoa.sexo, pessoa.idade);
}