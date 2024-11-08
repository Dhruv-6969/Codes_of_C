#include <stdio.h>

int main()
{
    int a = 1, *j;

    j = &a;
    printf("The address of the variable a = %u\n", j);
    printf("The value present in the above address = %d", *j);
    return 0;
}