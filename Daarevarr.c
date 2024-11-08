// reverse an array

#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Enter the size of an array:- \n");
    scanf("%d", &n);
    int arr[n];
    int j = n-1;
    int ar[n];
    for(i; i<n; i++)
    {
        printf("Enter element %d:- ", i+1);
        scanf("%d", &arr[i]);
    }
    for (j, i=0; j>=0, i <n; j--, i++)
    {
        ar[j] = arr[i];
    }
    for(int j=0; j<n; j++)
    {
        printf("%d\t", ar[j]);
    }
    return 0;
}