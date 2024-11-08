// Write a program to convert Celcius (Centigrade degrees temperature to Farenheit)

#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter the temperature in celcius: \n");
    scanf("%f", &c);

    f = ((9.0 / 5.0) * c) + 32;

    printf("The temperature in farenhiet = %f", f);

    return 0;
}