#include <stdio.h>

void main()
{
    int idade;

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    printf("%d\n", idade);

    if (idade < 0) {
        printf("Idade inválida");
        return;
    }

    if ((idade >= 0) && (idade <= 2))
    {
        printf("Recém-nascido");
    }
    else if ((idade >= 3) && (idade <= 11))
    {
        printf("Criança");
    }
    else if ((idade >= 12) && (idade <= 19))
    {
        printf("Adolescente");
    }
    else if ((idade >= 20) && (idade <= 55))
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }
}