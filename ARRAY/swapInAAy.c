#include<stdio.h>
void fun(int x[]){
    int t=x[0];
    x[0]=x[1];
    x[1]=t;
    return;

}

int main(){
    int arr[2]={1,2};
    printf("%d  %d\n",arr[0],arr[1]);
    
    fun(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}