#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    float r, fi;

    printf("Enter X and Y Coordinates respectively: ");
    scanf("%d%d", &x, &y);

    r = sqrt(pow(x, 2) + pow(y, 2));

    fi = atan(y / x);

    printf("The Polar Coordinates are (%f,%f)", r, fi);

    return 0;
}