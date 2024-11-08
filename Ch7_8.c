#include <stdio.h>

int main()
{
    int table[3][10], a, b, c;

    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);

    for (int i = 0; i < 10; i++)
    {
        table[0][i] = a * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        table[1][i] = b * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        table[2][i] = c * (i + 1);
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}