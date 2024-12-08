#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the number a and b:");
    scanf("%d %d", &a, &b);

    int x;
    x = a;
    a = b;
    b = x;

    printf("%d %d", a, b);

    return 0;
}