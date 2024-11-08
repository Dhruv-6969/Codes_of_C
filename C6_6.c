#include <stdio.h>

int main()
{
    float pop = 100000;
    int i;

    for (i = 1; i <= 10; i++)
    {
        pop = pop + pop * 10 / 100;
        printf("The Population after %d year(s) = %f\n", i, pop);
    }
    return 0;
}