#include <stdio.h>
#include <math.h>
int main()
{
    float r, d, sinv, cosv, tanv, cotv, cosecv, secv;
    printf("Enter the value of angle in Degrees: ");
    scanf("%f", &d);

    r = (3.14159 / 180) * d;

    sinv = sin(r);
    cosv = cos(r);
    tanv = tan(r);
    cotv = 1 / tanv;
    cosecv = 1 / sinv;
    secv = 1 / cosv;

    printf("Sin(Angle) = %f\n", sinv);
    printf("Cos(Angle) = %f\n", cosv);
    printf("Tan(Angle) = %f\n", tanv);
    printf("Cot(Angle) = %f\n", cotv);
    printf("Cosec(Angle) = %f\n", cosecv);
    printf("Sec(Angle) = %f\n", secv);

    return 0;
}