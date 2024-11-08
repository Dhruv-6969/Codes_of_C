#include <stdio.h>

int main()
{
    int n,num[10];
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 0; i<10; i++)
    {
        num[i] = n * (i+1);
        printf("%d\n", num[i]);
    }   
    return 0;
}