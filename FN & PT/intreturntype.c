#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);

    int sum=add(a,b);
    printf("%d", sum);
    return 0;
}



    
 