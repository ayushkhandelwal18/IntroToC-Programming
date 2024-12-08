
#include<stdio.h>
#include<string.h>

 typedef struct bank{
    int accn;
    int balance;
    char name[30];
}bank;

 bank arr[2];
   
   /* int low(int arr[n].balance){
    int i=0;
     while(arr[i].balance<100){
        printf("%d",arr[i].accn);
        printf("%d",arr[i].balance);
        printf("%s",arr[i].name);
        i++;
    }
}*/


int main(){
    bank arr[2];
    for(int i=0;i<=2;i++){
        scanf("%d",&arr[i].accn);
        scanf("%d",&arr[i].balance);
        scanf("%s",&arr[i].name);
    }

    for(int i=0;i<=2;i++){
        printf("%d\n",arr[i].accn);
        printf("%d\n",arr[i].balance);
        printf("%s\n",arr[i].name);
    }
 // int lowbal;
//printf("Details of account having balance less than %d is :",100 );

 //lowbal=low(arr[2].balance);

return 0;
}