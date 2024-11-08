#include <stdio.h>
int main() 
{
    int a, b, c, d, e;
    printf("Enter marks of Subject 1(out of 100): ");
    scanf("%d", &a);
    printf("Enter marks of Subject 2(out of 100): ");
    scanf("%d", &b);
    printf("Enter marks of Subject 3(out of 100): ");
    scanf("%d", &c);
    printf("Enter marks of Subject 4(out of 100): ");
    scanf("%d", &d);
    printf("Enter marks of Subject 5(out of 100): ");
    scanf("%d", &e);
    float agg = (a + b + c + d + e)/500.0;
    printf("Aggregate = %f \n", agg);
    float per = agg*100.0;
    printf("Percentage = %f \n", per);
    return 0;
}