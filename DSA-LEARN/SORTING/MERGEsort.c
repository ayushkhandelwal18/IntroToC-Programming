#include<stdio.h>

void merge(int arr[], int start , int mid, int end){
    int temp[end-start+1];
    int left =start;
    int right =mid+1;
    int index =0;

    while(left<=mid && right<=end){

        if(arr[left]<=arr[right]){
            temp[index] =arr[left];
            index++ ;
            left++;
        }

        else{
            temp[index] = arr[right];
            index++;
            right++;
        }
    }
    
    // if left array not empty yet
    while(left<=mid){
         temp[index] =arr[left];
            index++ ;
            left++;

    }
     // if right array not empty yet
     while(right<=end){
        temp[index] = arr[right];
            index++;
            right++;
     }

     //put these values of temp in arr
     index=0;
     while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
     }

}

void mergesort(int arr[], int start , int end){

    if(start==end){
        return;
    }

    int mid=start+(end-start)/2;
    //leftside
    mergesort(arr,start,mid);
    //rightside
    mergesort(arr,mid+1,end);

    merge(arr,start,mid,end);

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

   
    mergesort(arr,0,n-1);


     for(int i=0;i<n;i++){
        printf(" %d element of the array is :  %d \n",i+1, arr[i]);
        
    }

    return 0;

}
