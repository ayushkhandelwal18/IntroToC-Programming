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

    if ( (a + b) > c && (b + c) > a && (c + a > b) )
    {
        printf("given sides are right");
    }

    return 0;
}