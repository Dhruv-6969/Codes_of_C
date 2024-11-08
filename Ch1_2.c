// Calculate the area of a circle and modify the same program,
// to calculate the volume of a cylinder given its radius and height.

#include <stdio.h>
#include <math.h>

int main()
{
    float r, h, a, v;

    printf("\nEnter the radius of the circle: ");
    scanf("%f", &r);

    a = 3.14 * pow(r, 2);

    printf("\nEnter the height of the cylinder: ");
    scanf("%f", &h);

    v = a * h;

    printf("\nThe area of the circle = %f", a);
    
    printf("\nThe volume of the cylinder = %f", v);

    return 0;
}