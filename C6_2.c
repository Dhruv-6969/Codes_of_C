#include <stdio.h>

int main()
{
    float x, i;
    int y;

    for (x = 5.5; x <= 12.5; x = x + 0.5)
    {
        for (y = 1; y <= 6; y++)
        {
            i = 2 + (y + 0.5 * x);
            printf("For x = %f & y = %d, i = %f\n", x, y, i);
        }
    }
    return 0;
}