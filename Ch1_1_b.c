// b) Using inputs supplied by the user

#include <stdio.h>

int main()
{
    float l, b, a;

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f%f", &l, &b);

    a = l * b;

    printf("The area of the rectangle is %f", a);

    return 0;
}