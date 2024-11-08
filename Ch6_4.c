#include <stdio.h>

int sum(int a, int b);
float avg(int a, int b);

int main()
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    sum(x, y);
    avg(x, y);
    printf("The sum and avg of the integers = %d & %f", sum(x,y), avg(x, y));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}

float avg(int a, int b)
{
    return (a + b) / 2.0;
}
