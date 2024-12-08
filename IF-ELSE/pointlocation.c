#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the cordinates");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x==0 && y==0)
    {
        printf("point is origin");
    }
    else if(x==0)
    {
        printf("Lies on y axis");
    }
    else if(y==0)
    {
        printf("Lies on x axis");
    }
    else{
        printf("Doesnot lie on x or y axis");
    }
    
    return 0;
}