#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d elemtent of the array : ",i+1);
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int min=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        
        if(arr[i]<min) min=arr[i];
    }
    
    printf("Min is : %d\n ",min);
    printf("Max is : %d ",max);
    return 0;
}