#include<stdio.h>

int partition(int arr[],int start , int end){
    int position=start;

    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end])
        {
            int temp=arr[i];
            arr[i]=arr[position];
            arr[position]=temp;
            position++;

        }
    }
    return position-1;
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