#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the X-Y component respectively: ");
    scanf("%d%d", &x, &y);

    if (y == 0 && x != 0)
    {
        printf("Point lies on X axis");
    }
    else if (x == 0 && y != 0)
    {
        printf("Point lies on Y axis");
    }
    else if (x == 0 && y == 0)
    {
        printf("Point lies on origin");
    }
    else if (x != 0 && y != 0)
    {
        printf("Point lies on X-Y axis");
    }

    return 0;
}