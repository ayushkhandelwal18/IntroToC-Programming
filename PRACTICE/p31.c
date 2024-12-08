#include<stdio.h>
int main(){
    float num;
    printf("Enter the number");
    scanf("%f",&num);


    if(num<0){
    float abs=num*(-1.0);
    printf("%f",abs);
    }

    else
    printf("%f",num);
    

    return 0;
}