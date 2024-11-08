#include <stdio.h>
#include <stdlib.h>
int main()
{
    int val, abval;

    printf("Enter an integer value: ");
    scanf("%d", &val);

    abval = abs(val);

    printf("The absolute value of the entered value = %d", abval);

    return 0;
}