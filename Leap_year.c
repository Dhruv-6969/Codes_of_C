// leap year 
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d", &yr);

    if(yr%4==0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}