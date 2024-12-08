#include<stdio.h>
typedef int* pointer;
int main(){
    int x=5 ,y=1;
    pointer a=&x,b=&y; //int*a=&x,b=&y ye likhnege to error dega
    printf("%p\n",a);
    printf("%p",b);

    return 0;

}