#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    return n+sum(n-1); 
}
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);

    int x=sum(n);
    printf("%d",x);
    return 0;
}