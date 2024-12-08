#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }

    //bubble sort
    //no of passes n size h to n-1 passes honge 
    for(int i=0;i<n-1;i++){ 
     // now comparing and swaping
     bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;

    }

     for(int i=0;i<n;i++){
        printf(" %d element of the array is :  %d \n",i+1, arr[i]);
        
    }

    return 0;

}