#include<stdio.h>

int main(){
    int arr[5]={2,3,4,5,6};
    int sum=0;
    int* ptr=arr;
    for(int i=0;i<5;i++){
        sum=sum+ *ptr;
        ptr;

    }
    printf("Sum : %d",sum);
}