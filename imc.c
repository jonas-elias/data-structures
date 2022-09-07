#include <stdio.h>

void main()
{
    float peso, altura, imc;

    printf("Entre com o seu peso \n");
    scanf("%f", &peso);

    printf("Entre com a altura \n");
    scanf("%f", &altura);

    imc = (peso / (altura * altura));

    printf("IMC: %.2f\n", imc);
    if ((20 <= imc) && (imc < 25))
    {
        printf("Peso normal");
    }
    else if ((25 <= imc) && (imc < 30))
    {
        printf("Acima do peso");
    }
    else if ((30 <= imc) && (imc < 34))
    {
        printf("Obeso");
    }
    else if (imc > 34)
    {
        printf("Muito obeso");
    }
    else
    {
        printf("Abaixo do peso");
    }
}
