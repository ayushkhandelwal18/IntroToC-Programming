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

    //SELECTION sort
   
    for(int i=0;i<n-1;i++){ 
        //no of passes
     int min = INT_MAX;
     int minindex=-1;
    
        for(int j=i;j<n;j++){
            // for finding minimum  
            if(min>arr[j]){
                min=arr[j];
                minindex=j;
            }
        }

        //swap ith and minindex th element
        int temp =arr[i];
                arr[i]=arr[minindex];
                arr[minindex]=temp;

    }



     for(int i=0;i<n;i++){
        printf(" %d element of the array is :  %d \n",i+1, arr[i]);
        
    }

    return 0;

}