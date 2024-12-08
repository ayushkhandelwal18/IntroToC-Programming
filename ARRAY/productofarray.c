#include<stdio.h>
int main(){
    int a[3]={5,2,3};
    int p=1;

    for(int i=0;i<3;i++){
        p=p*a[i];
       
    }
     printf("%d",p);
     return 0;
}