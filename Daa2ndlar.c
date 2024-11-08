// in a linear search algorithm, find the 2nd largest element in an array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:- \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d:- ", i + 1);
        scanf("%d", &arr[i]);
    }

    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b && arr[i] < a)
        {
            b = arr[i];
        }
    }
    printf("2nd largest Number:- %d", b);
    return 0;
}