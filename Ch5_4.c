#include <stdio.h>
int fibonacci(int n);
int main()
{
    int num;
    printf("Enter the nth term: ");
    scanf("%d", &num);

    for(int i = 0; i<= num; i++)
    {
        printf("%d, ", fibonacci(i)); //0 1 1 2 ....
    }
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
