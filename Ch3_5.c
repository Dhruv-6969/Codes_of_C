#include <stdio.h>

int main()
{
    char c;

    printf("Enter a key: \n");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
        printf("It is a lowercase");
    else
        printf("It is not a lowercase");

    return 0;
}