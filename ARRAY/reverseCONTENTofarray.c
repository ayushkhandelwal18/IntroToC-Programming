#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5];

    for(int i=0;i<=4;i++){
         b[i]=a[4-i];
         printf(" %d ",b[i]);

    }
    

    return 0;
}