#include <stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    sum(n);
    printf("%d", sum(n));
    return 0;
}

int sum(int n)
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
    {
        int s;
        s = n + sum(n - 1);

        return s;
    }
}