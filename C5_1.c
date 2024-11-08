//ASCII values
#include <stdio.h>

int main()
{
    int c = 0;

    while (c <= 255)
    {
        printf("%c = %d\n", c, c);
        c++;
    }
    return 0;
}