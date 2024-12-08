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

    int z=0; //zero
    int o=0; //one
    int t=0; //two

for(int i=0;i<n;i++){
    if(arr[i]==0) z++;
    else if(arr[i]==1) o++;
    else t++;
}

for(int i=0;i<n;i++){

    if(i<z) arr[i]=0;
    
     else if(i<z+o) arr[i]=1;
     else arr[i]=2;

}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

}
return 0;
}