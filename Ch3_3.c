#include <stdio.h>

int main()
{
    float a;

    printf("Enter the income amount(in lakhs): \n");
    scanf("%f", &a);

    if (a >= 2.5 && a <= 5.0)
        printf("Tax = 5");
    else if (a > 5.0 && a <= 10.0)
        printf("Tax = 20");
    else if (a > 10.0)
        printf("Tax = 30");
    else if (a < 2.5)
        printf("No Tax");

    return 0;
}