#include<stdio.h>
void LinearSearch(int arr[] , int size ,int key){
    int a=0;
    for(int i=0;i<size;i++){
        if(key==arr[i])  a++;
        }
if(a==1) printf("Present");
else  printf("Absent");
 
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

     LinearSearch(arr,n,key);

     return 0;



}