// Range
#include <stdio.h>
#include <limits.h>
int main()
{
    int n, num, max, min, r;

    printf("How many numbers do you want to enter?:- ");
    scanf("%d", &n);

    min = INT_MAX;
    max = INT_MIN;

    int i = 1;
    while (i <= n)
    {
        printf("Enter an integer:- ");
        scanf("%d", &num);

        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }

        i++;
    }

    r = max - min;

    printf("The range is %d", r);

    return 0;
}