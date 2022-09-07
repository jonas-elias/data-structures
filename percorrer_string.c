#include <stdio.h>

void main()
{
    int contador = 0;
    char frase[80];

    printf("Digite a frase\n");
    gets(frase);

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'A')
        {
            contador += 1;
        }
    }

    printf("%d", contador);
}