#include <stdio.h>

int main()
{
    int n=1, sum=0;
    
    while(n<=10)
    {
        sum = sum + n;
        n++;
    }

    printf("Sum of first ten natural numbers = %d", sum);
    return 0;
}