#include <stdio.h>
int main()
{
    int n;
    int y;
    printf("Enter the number:");
    scanf("%d", &n);
    y=n;

    printf("\n");

    int x = 0;
    while (n != 0)
    {
        x = x * 10;
        x = x + n % 10;
        n = n / 10;
 }
    
     printf("reversed number is %d", x);

     printf("\n");

    if (y == x)
        printf("number and its reverse is equal");

    else
        printf("number and its reverse is  not equal");

    return 0;
}