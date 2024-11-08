#include <stdio.h>
#include <math.h>
int main()
{
    float p, a1, a2, l, b, r;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%f%f", &l, &b);

    p = 2.0 * (l + b);

    a1 = l * b;

    printf("\nEnter the radius of the circle: ");
    scanf("%f", &r);

    a2 = 3.14 * pow(r, 2);

    printf("Perimeter of Rectangle = %f\nArea of Rectangle = %f\nArea of Circle = %f", p, a1, a2);

    return 0;
}