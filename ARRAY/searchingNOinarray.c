#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int x=10;

    for(int i=0;i<=4;i++){
        if(a[i]==x){
            printf("%d is present in the array and its is %d\n",x,i);
            break;
        }
    
        else
        printf("not present\n");
    }
    return 0;
}