#include <stdio.h>
int main() {
    float r, a;
    printf("Enter the value of radius: ");
    scanf("%f", &r);
    /*Formula of Area of Circle*/
    a = 3.14 * r * r;
    printf("Area of Circle = %f", a);
    return 0;
}