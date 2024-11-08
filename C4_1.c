#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter the three sides of triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if ((a == b && b != c) || (b == c && a != b))
    {
        printf("Isosceles Triangle\n");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral Triangle\n");
    }
    else if (a != b && b != c)
    {
        printf("Scalene Triangle\n");
    }
    if (a >= b && a >= c)
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        {
            printf("Right-angled triangle");
        }
    }
    if (b >= a && b >= c)
    {
        if (pow(b, 2) == pow(a, 2) + pow(c, 2))
        {
            printf("Right-angled triangle");
        }
    }
    if (c >= b && c >= a)
    {
        if (pow(c, 2) == pow(b, 2) + pow(a, 2))
        {
            printf("Right-angled triangle");
        }
    }
    return 0;
}
