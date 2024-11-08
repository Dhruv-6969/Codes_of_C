#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter Temperture in Fahrenhiet: ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("Temperature in Celcius = %f", c);

    return 0;
}