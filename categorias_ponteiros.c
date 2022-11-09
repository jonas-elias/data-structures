#include <stdio.h>
#include <string.h>

typedef struct
{
    int idade;
} Categoria;

void entradaDados(Categoria *idade)
{
    printf("Digite a idade\n");
    scanf("%d", &idade->idade);
}

void verificaCategoria(Categoria *idade)
{
    if (idade->idade == "")
    {
    }
    else if ()
    {
        /* code */
    }
}

void main()
{
    Categoria *idade;
    entradaDados(idade);
    verificaCategoria(idade);
}