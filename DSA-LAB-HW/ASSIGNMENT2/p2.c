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



    int key;
    printf("Enter the key : ");
    scanf("%d",&key);
    
    for(int i=0;i<n;i++){
   for(int j=0;j<n-1-i;j++){

    if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }

}
    }
printf("%d",arr[key-1]);
     
    return 0;
}