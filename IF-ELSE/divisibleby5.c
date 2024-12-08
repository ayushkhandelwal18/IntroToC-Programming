#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d" ,&n);
    if (n%5 == 0)
    {
        printf("The given number is divisble by 5");

    }
    else
    { 
        printf("Entered number is not divisble by 5");
    }

    return 0;
}