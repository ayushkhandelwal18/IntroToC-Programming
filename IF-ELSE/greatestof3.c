#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Enter value of c:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a ig greater");
    }

    if (b > a && b > c)
    {
        printf("b is greater");
    }

    if (c > a && c > b)
    {
        printf("c is greater");
    }
    return 0;
}