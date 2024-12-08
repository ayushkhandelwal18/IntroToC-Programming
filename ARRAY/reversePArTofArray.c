#include<stdio.h>

    

int main(){
    int a[7]={1,2,3,4,5,6,7};

for(int i=1,j=4;i<=j;i++,j--){
    int t=a[i];
        a[i]=a[j];
        a[j]=t;
}


    for(int i=0;i<=6;i++){
       printf(" %d ",a[i]);
 }
    

    return 0;
}