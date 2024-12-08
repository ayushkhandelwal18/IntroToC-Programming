
#include<stdio.h>
#include<string.h>

 typedef struct bank{
    int accn;
    int balance;
    char name[30];
}bank;


int main(){
    bank arr[2];
    for(int i=0;i<=2;i++){
        scanf("%d",&arr[i].accn);
        scanf("%d",&arr[i].balance);
        scanf("%c",&arr[i].name);
    }
