#include <stdio.h>

int main()
{
    float h, c, t;
    printf("Enter the Hardness, Carbon content and Tensile strength respectively: ");
    scanf("%f%f%f", &h, &c, &t);

    if (h > 50 && c < 0.7 && t > 5600)
        printf("GRADE 10");

    else if (h > 50 && c < 0.7 && t <= 5600)
        printf("GRADE 9");

    else if (h <= 50 && c < 0.7 && t > 5600)
        printf("GRADE 8");

    else if (h > 50 && c >= 0.7 && t > 5600)
        printf("GRADE 7");

    else if (h > 50 && c >= 0.7 & t <= 5600)
        printf("GRADE 6");
    else if (h <= 50 && c < 0.7 && t <= 5600)
        printf("GRADE 6");
    else if (h <= 50 && c >= 0.7 && t > 5600)
        printf("GRADE 6");

    else if (h <= 50 && c >= 0.7 && t <= 5600)
        printf("GRADE 5");

    return 0;
}