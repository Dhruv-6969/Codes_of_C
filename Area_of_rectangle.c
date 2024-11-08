#include <stdio.h>
int main() {
    float a, l, b;
    printf("Enter length of rectangle (in meters): ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle (in meters): ");
    scanf("%f", &b);
    /*Formula of area of rectangle*/
    a = l * b;
    printf("Area of the rectangle: %f", a);
    return 0;
}