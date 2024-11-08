#include <stdio.h>
#include <math.h>
int main()
{
    float h, w, bmi;

    printf("Enter Height(in meters) = ");
    scanf("%f", &h);

    printf("Enter Weight(in kg) = ");
    scanf("%f", &w);

    bmi = w / pow(h, 2);

    printf("B.M.I = %f\n", bmi);

    if (bmi < 15)
        printf("Starvation");
    else if (bmi > 15.1 && bmi < 17.5)
        printf("Anorexic");
    else if (bmi > 17.6 && bmi < 18.5)
        printf("Underweight");
    else if (bmi > 18.6 && bmi < 24.9)
        printf("Ideal");
    else if (bmi > 25.0 && bmi < 29.9)
        printf("Overweight");
    else if (bmi > 30.0 && bmi < 39.9)
        printf("Obese");
    else if (bmi > 40.0)
        printf("Morbidly Obese");

    return 0;
}