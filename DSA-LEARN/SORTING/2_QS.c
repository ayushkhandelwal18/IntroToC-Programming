#include<stdio.h>

int partition(int a[],int start , int end){
     int pivot = a[end]; // pivot element  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}

void quicksort( int arr[],int start,int end){

    if(start>=end){
        return;
    }

    int pivot=partition(arr,start,end);
    //left side
    quicksort(arr,start,pivot-1);
    //rightside
    quicksort(arr,pivot+1,end);

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

    quicksort(arr,0,n-1);

     for(int i=0;i<n;i++){
        printf(" %d element of the array is :  %d \n",i+1, arr[i]);
        
    }

    return 0;

}