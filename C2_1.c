#include <stdio.h>

int main()
{
    int d1, d2, d3, d4, d5, sum, num;

    printf("Enter 5 digit integer: ");
    scanf("%d", &num);

    d5 = num % 10;
    num = num / 10;

    d4 = num % 10;
    num = num / 10;

    d3 = num % 10;
    num = num / 10;

    d2 = num % 10;
    num = num / 10;

    d1 = num % 10;
    num = num / 10;

    sum = d5 + d4 + d3 + d2 + d1;

    printf("The Sum of all digits entered = %d", sum);

    return 0;
}