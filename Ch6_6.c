#include <stdio.h>
int change(int x);

int main()
{
    int a = 7;
    
    printf("The original value = %d\n", a);
    change(a);
    printf("The new value = %d\n", change(a));
    return 0;
}

int change(int x)
{
    return x * 10;
}