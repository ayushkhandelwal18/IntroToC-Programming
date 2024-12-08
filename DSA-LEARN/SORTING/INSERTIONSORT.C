#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }

    //INSERTION sort
   
    for(int i=0;i<n-1;i++){ 
        //no of passes
     int j=i+1;

     while(j>=1 && arr[j]<arr[j-1]){
        int temp =arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                 j--;

     }
    
     }



     for(int i=0;i<n;i++){
        printf(" %d element of the array is :  %d \n",i+1, arr[i]);
        
    }

    return 0;

}