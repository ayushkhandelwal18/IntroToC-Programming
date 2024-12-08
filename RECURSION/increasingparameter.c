#include<stdio.h>
void good(int n){
    if(n==0) return;
    printf("Good morning Ayush\n");
    good(n-1);
    return ;
}


int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);

   good(n);
   return 0;
}