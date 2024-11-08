//profit or loss
#include <stdio.h>
int main()
{
    float cp, sp, p, l;

    printf("Enter Cost Price and Selling price: ");
    scanf("%f%f", &cp, &sp);

    p = sp - cp;
    l = cp - sp;

    if(p>0)
    {
        printf("Profit = %f", p);
    }

    if(l>0)
    {
        printf("Loss = %f", l);
    }

    if(p==0)
    {
        printf("Neither profit nor loss");
    }
    return 0;
}