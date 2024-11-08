#include <stdio.h>

int main()
{
    int table[3][10];

    for (int i = 0; i < 10; i++)
    {
        table[0][i] = 2 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        table[1][i] = 7 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        table[2][i] = 9 * (i + 1);
    }

    for (int i = 0; i<3; i++)
    {
        for(int j =0; j<10; j++)
        {
            printf("%d \t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}