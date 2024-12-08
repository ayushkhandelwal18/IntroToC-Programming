#include<stdio.h>
int main(){
    int a;
    printf("Enter value of a");
    scanf("%d",&a);

    int b;
    printf("Enter value of b");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d is value of a \n %d is value of b",a,b);
    return 0;
}
