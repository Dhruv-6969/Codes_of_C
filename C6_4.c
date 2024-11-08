#include <stdio.h>
#include <math.h>
int main()
{
    float x, sum = 0, d, esum;
    int i;
    printf("Enter the value of x:- \n");
    scanf("%f", &x);

    d = ((x - 1) / x);

    for (i = 2; i <= 7; i++)
    {
        sum = sum + pow(d / 2, i);
    }

    esum = d + sum;

    printf("The sum = %f\n", esum);

    return 0;
}