#include <stdio.h>
int pos(int num[]);
int main()
{
    int i, num[10];

    printf("Enter 10 integers: \n");

    for(i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("The positive numbers are:- \n");
    pos(num);
    return 0;
}
int pos(int num[])
{
    for(int i= 0; i<10; i++)
    {
        if(num[i]>0)
        printf("%d\n", num[i]);
    }
}