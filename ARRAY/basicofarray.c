#include<stdio.h>
int main ()
{
    int a[5]={2,3,4,5,6};
    printf(" %d  %d  %d \n", a[0],a[3],a[4]);
   

    a[0]=100; //updation in array
    a[0]+=100;
    printf("%d\n",a[0]);


    float b[2]={1.2, 2.5};
    printf("%f\n",b[0]);

    char arr[3]={'A','b','c'};
    printf("%c\n",arr[0]);

     return 0;
}