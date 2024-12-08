#include<stdio.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);

    int b;
    printf("Enter b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Value of a is %d\n" , a);
    printf("Value of b is %d" , b);
    


    return 0;
}