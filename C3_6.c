#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;

    printf("Enter value of X1 & Y1 respectively: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter value of X2 & Y2 respectively: ");
    scanf("%d%d", &x2, &y2);
    printf("Enter value of X3 & Y3 respectively: ");
    scanf("%d%d", &x3, &y3);

    if ((y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2))
    {
        printf("Points are collinear");
    }
    else
    {
        printf("Points are not collinear");
    }
    return 0;
}