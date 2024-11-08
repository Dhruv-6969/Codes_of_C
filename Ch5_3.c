#include <stdio.h>
float force(float m);

int main()
{
    float m;
    printf("Enter the mass of a body: ");
    scanf("%f", &m);

    force(m);

    return 0;
}

float force(float m)
{
    float force = m * 9.8;
    printf("Force = %f", force);
}