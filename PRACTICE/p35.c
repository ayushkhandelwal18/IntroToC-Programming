#include<stdio.h>
int main(){
    int x;
    printf("Enter the x cordinate");
    scanf("%d",&x);

    int y;
    printf("Enter the y cordinate");
    scanf("%d",&y);

    if(y==0 && x!=0)
    printf("given cordinate lies on x axis");

    else if(x==0 && y!=0)
    printf("given cordinates lies on y axis");

    else if(x!=0 && y!=0)
    printf("given cordinates does not lies on x and y axis");

    else
    printf("given cordinates are origin");

    return 0;
}