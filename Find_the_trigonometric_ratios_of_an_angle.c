#include <stdio.h>
#include <math.h>
int main() {
    float angle_rad, sin, cos, tan, cosec, sec, cot;
    printf("Enter angle in radians: ");
    scanf("%f", &angle_rad);
    sin = sinf(angle_rad);
    cos = cosf(angle_rad);
    tan = tanf(angle_rad);
    cosec = 1/sin;
    sec = 1/cos;
    cot = 1/tan;

    printf("angle is: %f \n", angle_rad);
    printf("sin of angle is: %f \n", sin);
    printf("cos of angle is: %f \n", cos);
    printf("tan of angle is: %f \n", tan);
    printf("cosec of angle is: %f \n", cosec);
    printf("sec of angle is: %f \n", sec);
    printf("cot of angle is: %f \n", cot);

    return 0;
}