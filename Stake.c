#include <stdio.h>

int main()
{
    int c, l;
    scanf("%d %d",&c, &l);

    int cs = (c*1.7) - (c+l);
    int ls = (l*2.2) - (c+l);

    printf("CSK = %d", cs);
    printf("LSG = %d", ls);
    return 0;
}