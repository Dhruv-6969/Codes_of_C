#include <stdio.h>

int main()
{
    int a0h, a0w, a1h, a1w, a2h, a2w, a3h, a3w, a4h, a4w, a5h, a5w, a6h, a6w, a7h, a7w, a8h, a8w;

    a0h = 1189;
    a0w = 841;

    printf("A0 = %d x %d\n", a0h, a0w);

    a1h = a0w;
    a1w = a0h / 2;

    printf("A1 = %d x %d\n", a1h, a1w);

    a2h = a1w;
    a2w = a1h / 2;

    printf("A2 = %d x %d\n", a2h, a2w);

    a3h = a2w;
    a3w = a2h / 2;

    printf("A3 = %d x %d\n", a3h, a3w);

    a4h = a3w;
    a4w = a3h / 2;

    printf("A4 = %d x %d\n", a4h, a4w);

    a5h = a4w;
    a5w = a4h / 2;

    printf("A5 = %d x %d\n", a5h, a5w);

    a6h = a5w;
    a6w = a5h / 2;

    printf("A6 = %d x %d\n", a6h, a6w);

    a7h = a6w;
    a7w = a6h / 2;

    printf("A7 = %d x %d\n", a7h, a7w);

    a8h = a7w;
    a8w = a7h / 2;

    printf("A8 = %d x %d\n", a8h, a8w);

    return 0;
}