#include <stdio.h>

int main()
{
    int c, d, e;

    printf("Enter values of C & D respectively: ");
    scanf("%d%d", &c, &d);

    e = c;
    c = d;
    d = e;

    printf("The values of C and D are %d and %d respectively.", c, d);
    return 0;
}