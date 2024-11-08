#include <stdio.h>
int avg(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    avg(a, b, c);
    return 0;
}

int avg(int a, int b, int c)
{
    int avg = (a + b + c)/3;
    printf("Average = %d", avg);
}