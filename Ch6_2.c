#include <stdio.h>
void add(int a){
    printf("The address of a = %u\n", &a);
}
int main()
{
    int i = 100;
    printf("The address of i = %u\n", &i);
    add(i);
    return 0;
}

// No the values are not same because a stores a copy of i, not the real value of i and therefore stores in different address