#include <stdio.h>

int main()
{
    int yr;

    printf("Enter the year: \n");
    scanf("%d", &yr);

    if (yr % 4 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}