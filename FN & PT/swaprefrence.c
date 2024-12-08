#include<stdio.h>
void swap(int*x , int*y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    return;
}

int main(){
    int a;
    printf("Enter value of a :");
    scanf("%d",&a);

    int b;
    printf("Enter value of b :");
    scanf("%d",&b);

    swap(&a,&b);
    printf("The value of a is %d\n" ,a);
    printf("The value of b is %d\n" ,b);

    return 0;
}