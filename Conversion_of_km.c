#include <stdio.h>
int main() {
    float a;
    printf("Enter value in km: ");
    scanf("%f", &a);
    float m = a * 1000.0;
    float f = a * 3280.84;
    float in = a * 39370.1;
    float cm  = a * 100000.0;
    printf("Value in meters = %f \n", m);
    printf("Value in feets = %f \n", f);
    printf("Value in inches = %f \n", in);
    printf("Value in centimeters = %f \n", cm);
    return 0;
}