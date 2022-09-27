#include <stdio.h>

void main()
{
    // float var = 11; // variável do tipo ponto flutuante
    float var = 5102; // variável do tipo ponto flutuante

    float *ponteiro;      // declaração de um ponteiro float
    ponteiro = &var; // atribuição do endereço de memória da variável declarada acima, ao respectivo ponteiro

    printf("Endereco de memoria: %x", ponteiro); // por se tratar de um valor hexadecimal, é necessário exibir o conteúdo através do indicador "%x" (atribuição de valores hexadecimais)
    fflush(stdin);
}
