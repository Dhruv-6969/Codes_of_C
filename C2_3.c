#include <stdio.h>
#include <math.h.>
int main()
{
    float l1, l2, g1, g2, d;

    printf("Enter latitudes in Degrees: ");
    scanf("%f%f", &l1, &l2);

    printf("Enter longitudes in Degrees: ");
    scanf("%f%f", &g1, &g2);

    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));

    printf("Distance in Nautical miles = %f", d);

    return 0;
}