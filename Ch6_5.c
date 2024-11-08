#include <stdio.h>

int main()
{
    int a = 5;
    int *j;
    int **k;
    j = &a;
    k = &j;
    printf("The value of the variable = %d", **k);
    return 0;
}