#include<stdio.h>
void reverse(int a[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--)  {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        
    }
return ;
}

int main(){
    int a[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=50;

    k=k%n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    
    

    for(int i=0;i<=6;i++){
       printf(" %d ",a[i]);
 }
    

    return 0;
}