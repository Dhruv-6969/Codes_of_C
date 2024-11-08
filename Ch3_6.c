#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter 4 integers: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                printf("%d is the greatest", a);
            else
                printf("%d is the greatest", d);
        }
        if (c > a)
        {
            if (c > d)
                printf("%d is the greatest", c);
            else
                printf("%d is the greatest", d);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            if (b > d)
                printf("%d is the greatest", b);
            else
                printf("%d is the greatest", d);
        }
        if (c > b)
        {
            if (c > d)
                printf("%d is the greatest", c);
            else
                printf("%d is the greatest", d);
        }
    }
    return 0;
}