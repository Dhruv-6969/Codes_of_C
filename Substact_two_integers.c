#include <stdio.h>
int main() {
    int a, b;
    printf("Enter Two Integers a and b : ");
    scanf("%d%d", &a, &b);
    int diff = a - b;
    printf("Difference of two integers = %d", diff);
    return 0;
}