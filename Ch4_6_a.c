#include <stdio.h>

int main()
{
    int n, sum = 0;

    for (n = 1; n <= 10; n++)
    {
        sum = sum + n;
    }

    printf("Sum = %d", sum);
    return 0;
}