#include <stdio.h>

float conversaoFahreParaCelsius(float fahrenheit);

void main()
{
    float fahrenheit;

    printf("Digite os graus em Fahrenheit\n");
    scanf("%f", &fahrenheit);

    printf("Celsius: %.2f", conversaoFahreParaCelsius(fahrenheit));
}

float conversaoFahreParaCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}