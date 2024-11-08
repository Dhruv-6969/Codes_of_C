// Write a program to calculate simple interest for a set of values representing principle,
// no. of years & rate of interest

#include <stdio.h>

int main()
{
    float si, p, r, n;

    printf("Enter the principle, rate of interest, number of years: \n");
    scanf("%f%f%f", &p, &r, &n);

    si = (p * n * r) / 100;

    printf("Simple Interest = %f", si);

    return 0;
}