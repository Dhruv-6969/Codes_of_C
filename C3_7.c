#include <stdio.h>

int main()
{
    int x, y, r, x1, y1;

    printf("Enter the coordinates of centre of the circle: ");
    scanf("%d%d", &x, &y);

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("Enter the coordinates of the point: ");
    scanf("%d%d", &x1, &y1);

    int dis;

    dis = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);

    if (dis > r * r)
    {
        printf("Point lies outside the circle");
    }
    else if (dis < r * r)
    {
        printf("Point lies inside the circle");
    }
    else if (dis == r * r)
    {
        printf("Point lies inside the circle");
    }

    return 0;
}