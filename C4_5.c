#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("ASCII VALUE = %d\n", c);

    if (c >= 97 && c <= 122)
        printf("Its a lowercase");
    else
        printf("Its not a lowercase");

    return 0;
}