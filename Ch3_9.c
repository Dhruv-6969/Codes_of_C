#include <stdio.h>

int main()
{
    int givyr, yr, diff;

    givyr = 2001;

    printf("Enter a year: \n");
    scanf("%d", &yr);

    diff = yr - givyr;

    int leapyr = diff / 4;

    int nonleapyr = diff - leapyr;

    int day = (leapyr * 366) + (nonleapyr * 365) + 1;

    if (day % 7 == 0)
    {
        printf("Sunday");
    }
    else if (day % 7 == 1)
    {
        printf("Monday");
    }
    else if (day % 7 == 2)
    {
        printf("Tuesday");
    }
    else if (day % 7 == 3)
    {
        printf("Wednesday");
    }
    else if (day % 7 == 4)
    {
        printf("Thursday");
    }
    else if (day % 7 == 5)
    {
        printf("Friday");
    }
    else if (day % 7 == 6)
    {
        printf("Saturday");
    }

    return 0;
}