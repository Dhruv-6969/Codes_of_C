#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, n, q, a;
    int count;

    for (count = 1; count <= 10; count++)
    {
        printf("Enter the Principle Value:- \n");
        scanf("%f", &p);

        printf("Enter the Rate of Interest:- \n");
        scanf("%f", &r);

        r = r / 100;

        printf("Enter the Number of Years:- \n");
        scanf("%f", &n);

        printf("Enter the times of interest compounds:- \n");
        scanf("%f", &q);

        a = p * (pow(1 + r / q, n * q));

        printf("Amount = %f\n", a);
    }
    return 0;
}