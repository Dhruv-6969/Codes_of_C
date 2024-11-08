#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("Prime Number");
    }
    else if (n == 1)
    {
        printf("Neither Prime nor Composite");
    }
    else if (count != 2)
    {
        printf("Not a Prime Number");
    }
    return 0;
}