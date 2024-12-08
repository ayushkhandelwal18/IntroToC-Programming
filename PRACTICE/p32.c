#include<stdio.h>
int main()
{
    int l;
    printf("Enter the length");
    scanf("%d" , &l);

    int b;
    printf("Enter the breadth");
    scanf("%d", &b);

    int area=l*b;
    int perimeter=2*(l+b);

    if(area>perimeter){
        printf("area is greater");
    }

     else
     { printf("perimeter is greater");
     }
    return 0;

}