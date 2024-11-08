#include <stdio.h>

int main()
{
    int d1, d2, d3, d4, d5, num, revnum;

    printf("Enter a 5-digit number: \n");
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

    revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1 * 1;

    printf("The reversed number is %d\n", revnum);

    if (num == revnum)
    {
        printf("The original and reversed numbers are equal");
    }
    else
    {
        printf("The original and reversed numbers are not equal");
    }
    return 0;
}