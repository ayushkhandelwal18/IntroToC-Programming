#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("The number is divisble by 5or 3");
        }
        else
        {
            printf("The number is divisble by 15");
        }
    }
    else
    {
        printf("not divible by 3 or 5");
    }
    return 0;
}