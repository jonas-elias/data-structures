#include <stdio.h>

void main()
{
    float weight, height, imc;

    printf("Input a weight \n");
    scanf("%f", &weight);

    printf("Input a height \n");
    scanf("%f", &height);

    imc = (weight / (height * height));

    printf("IMC: %.2f\n", imc);
    if ((20 <= imc) && (imc < 25))
    {
        printf("Wight normal");
    }
    else if ((25 <= imc) && (imc < 30))
    {
        printf("Above weight");
    }
    else if ((30 <= imc) && (imc < 34))
    {
        printf("Obeso");
    }
    else if (imc > 34)
    {
        printf("Overweight");
    }
    else
    {
        printf("Underweight");
    }
}
