#include<stdio.h>
int main()
{
   /* int a[5]={2,4,6,8,1};
   for(int i=0;i<=4;i++)
    printf(" %d ",a[i]);*/

    int a[5];
    for(int i=0;i<=4;i++){
    printf("\nEnter the element no %d",i+1);
    scanf("%d",&a[i]);
    }

    printf("%d",a[2]);
    return 0;
}  