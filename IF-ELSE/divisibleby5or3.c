#include<stdio.h>
int main ()
{
int n;
printf("Enter the number is :");
scanf("%d", &n);

if(n%5==0 || n%3==0)
{ printf("the number is divisible by 5 or 3");
}
else {
    printf("not divisble");
}

    return 0;

}