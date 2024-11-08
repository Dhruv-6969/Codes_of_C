#include <stdio.h>

int main()
{
    int i, sum=0, n;

    for(i=1; i<=10; i++)
    {
        n = 8 * i;
        sum = sum + n;
    }

    printf("Sum = %d", sum);   
    return 0;
}