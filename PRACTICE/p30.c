#include<stdio.h>
int main(){
    int A1;
    printf("Enter angle one :");
    scanf("%d",&A1);

    int A2;
    printf("Enter angle two :");
    scanf("%d",&A2);

       int A3;
    printf("Enter angle three :");
    scanf("%d",&A3);

    if(A1+A2+A3==180)
    printf("Given angles satisfys the triangle");

    else
    printf("Given angles not  satisfys the triangle");

    return 0;    

}