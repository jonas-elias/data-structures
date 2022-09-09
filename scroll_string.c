#include <stdio.h>

void main()
{
    int counter = 0;
    char words[80];

    printf("Digite a frase\n");
    gets(words);

    for (int i = 0; i < strlen(words); i++)
    {
        if (words[i] == 'a' || words[i] == 'A')
        {
            counter += 1;
        }
    }

    printf("%d", counter);
}