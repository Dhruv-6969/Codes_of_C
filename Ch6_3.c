#include <stdio.h>
void change(int *ptr);
int main()
{
    int a = 3;

    printf("The original value = %d\n", a);
    change(&a);
    printf("The new value = %d\n", a);
    return 0;
}
void change(int *ptr)
{
    *ptr = *ptr * 10;
}