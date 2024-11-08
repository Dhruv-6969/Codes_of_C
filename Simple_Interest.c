#include <stdio.h>
int main() {
    int p, n; /*Assuming principle value as P and number of years as n*/
    float si, r; /*Simple interest = si, Rate of interest = r*/
    printf("Enter Principle Value: ");
    scanf("%d", &p);
    printf("Enter Number of years: ");
    scanf("%d", &n);
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);
    /*Formula of Simple Interest*/
    si = p*r*n/100;
    printf("Simple interest = %f", si);
    return 0;
}