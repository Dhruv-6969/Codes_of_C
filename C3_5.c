#include <stdio.h>

int main()
{
    float l, b, a, p;

    printf("Enter length and breadth of rectangle respectively: ");
    scanf("%f%f", &l, &b);

    p = 2.0 * (l + b);

    a = l * b;

    printf("AREA = %f\n", a);
    printf("PERIMETER = %f\n", p);

    if (p < a)
    {
        printf("Area is greater than Perimeter");
    }
    else if (p > a)
    {
        printf("Perimeter is greater than Area");
    }
    else if (p == a)
    {
        printf("Perimeter and Area are equal");
    }

    return 0;
}