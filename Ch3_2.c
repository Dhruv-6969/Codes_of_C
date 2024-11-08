
#include <stdio.h>

int main()
{
    int m1, m2, m3, m;

    printf("Enter the marks of 3 subjects: \n");
    scanf("%d%d%d", &m1, &m2, &m3);

    m = (m1 + m2 + m3) / 3;

    if (m >= 40 && m1 >= 33 && m2 >= 33 && m3 >= 33)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}