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

    int temp;
for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
         temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
    
    }
  }

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

}

return 0;
}