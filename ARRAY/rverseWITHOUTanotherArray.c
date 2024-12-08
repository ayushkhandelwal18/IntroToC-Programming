#include<stdio.h>
void reverse(int a[]){
    int i=0;
    int j=4;

    while(i<j){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
return ;
}

int main(){
    int a[5]={1,2,3,4,5};
    reverse(a);


    for(int i=0;i<=4;i++){
       printf(" %d ",a[i]);
 }
    

    return 0;
}