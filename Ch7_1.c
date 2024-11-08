#include <stdio.h>

int main()
{
    int num[10];
    int *ptr = &num[0];
    printf("The address of the first element = %u\n", ptr);
    printf("The address of the third element = %u\n", &num[2]);
    printf("The address of the third element = %u\n", ptr + 2);
    return 0;
}