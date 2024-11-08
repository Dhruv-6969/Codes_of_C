#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("ASCII VALUE = %d\n", c);

    if (c >= 1 && c <= 47 && c >= 58 && c <= 64 && c >= 91 && c <= 96 && c >= 123 && c <= 127)
        printf("Its a special symbol");
    else
        printf("Its not a special symbol");

    return 0;
}