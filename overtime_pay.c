//overtime pay
#include <stdio.h>
int main()
{
    int o=0, t, count=1;

    while(count<=10)
    {
    printf("Enter the time(in hours) worked by 10 employees respectively: \n", count);
    scanf("%d", &t);

    if(t>40)
    {
    o = o+(t-40);
    
    printf("Employee %d has worked for %d hours\n", count, t);
    printf("Overtime pay is Rs.%d\n", o*120);
    }
    else
    printf("Since number of hours worked is %d, which is less than 40, therefore no overtime pay for employee %d\n", t, count);

    count++;
    }

    printf("Overtime pay is Rs.%d", 0*120);

    return 0;
}