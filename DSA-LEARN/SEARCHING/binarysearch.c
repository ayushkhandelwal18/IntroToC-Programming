#include<stdio.h>
void BinarySearch(int arr[] , int size ,int key){
     int left=0, right=size-1 ;

     while(left<=right){
        int mid=(left+right)/2;

        if(arr[mid]==key){
            printf("Present");
            return;
        } 
       
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    
        
        }
     printf("Absent");
     return ;
}

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the number which you want to search : ");
    scanf("%d",&key);

   

     BinarySearch(arr,n,key);

     return 0;



}