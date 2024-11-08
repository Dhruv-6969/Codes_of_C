#include <stdio.h>
float fahr(float c);

int main()
{
    float c;
    printf("Enter temperature in celcius: ");
    scanf("%f", &c);
    fahr(c);
    return 0;
}

float fahr(float c)
{
    float fahr = ((9/5)*c) +32;
    printf("Temperature in Fahrenheit = %f", fahr);
}