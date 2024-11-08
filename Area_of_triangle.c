#include <stdio.h>
#include <math.h>
int main()
{
    float s, ar, a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c)/2;

    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is: %f", ar);

    return 0;
}