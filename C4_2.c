#include <stdio.h>
#include <conio.h>
int main()
{
    float r, g, b, rf, gf, bf, max, w, c, m, y, k;
    printf("Enter the value of Red(0 to 255): \n");
    scanf("%f", &r);
    printf("Enter the value of Green(0 to 255): \n");
    scanf("%f", &g);
    printf("Enter the value of Blue(0 to 255): \n");
    scanf("%f", &b);

    rf = r / 255;
    gf = g / 255;
    bf = b / 255;

    printf("Red = %f\nGreen = %f\nBlue = %f\n", r, g, b);

    if (rf > gf)
    {
        if (rf > bf)
        {
            max = rf;
        }
        else if (bf > rf)
        {
            max = bf;
        }
    }
    else if (gf > rf)
    {
        if (gf > bf)
        {
            max = gf;
        }
        else if (bf > gf)
        {
            max = bf;
        }
    }

    w = max;
    c = (w - rf) / w;
    m = (w - gf) / w;
    y = (w - bf) / w;
    k = 1.0 - w;

    printf("White = %f\nCyan = %f\nMagenta = %f\nYellow = %f\nBlack = %f\n", w, c, m, y, k);

    return 0;
}