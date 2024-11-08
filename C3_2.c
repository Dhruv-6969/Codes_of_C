#include <stdio.h>

int main()
{
    int r, s, a;

    printf("Enter the ages of Ram, Shyam & Ajay respectively: ");
    scanf("%d%d%d", &r, &s, &a);

    if (r < s)
    {
        if (r < a)
        {
            printf("Ram is the youngest");
        }
        else
        {
            printf("Ajay is the youngest");
        }
    }
    else
    {
        if (s < a)
        {
            printf("Shyam is the youngest");
        }
        else
        {
            printf("Ajay is the youngest");
        }
    }
    return 0;
}