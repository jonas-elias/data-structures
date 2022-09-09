#include <stdio.h>

void main()
{
    int age;

    printf("Input a age: \n");
    scanf("%d", &age);

    printf("%d\n", age);

    if (age < 0)
    {
        printf("Age invalid");
        return;
    }

    if ((age >= 0) && (age <= 2))
    {
        printf("Baby");
    }
    else if ((age >= 3) && (age <= 11))
    {
        printf("Kid");
    }
    else if ((age >= 12) && (age <= 19))
    {
        printf("Adolescent");
    }
    else if ((age >= 20) && (age <= 55))
    {
        printf("Adult");
    }
    else
    {
        printf("Old");
    }
}