#include <stdio.h>
int rev(int m[]);
int main()
{
    int m[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks of %d: \n", i + 1);
        scanf("%d", &m[i]);
    }
    rev(m);
    return 0;
}
int rev(int m[])
{
    for (int j = 9, i = 1; j >= 0, i <= 10; j--, i++)
    {
        printf("The new marks of %d = %d\n", i, m[j]);
    }
}