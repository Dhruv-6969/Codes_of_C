#include <stdio.h>

int main()
{
    int num;

    printf("Enter the integer:- \n");
    scanf("%d", &num);

    printf("The table of %d:- \n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}