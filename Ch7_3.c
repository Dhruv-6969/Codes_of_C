#include <stdio.h>

int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        num[i] = 5 * (i + 1);
        printf("%d\n", num[i]);
    }

    return 0;
}