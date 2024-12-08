#include<stdio.h>
int main(){

int a[7]={1,2,3,4,5,6,7};

for(int i=0;i<7;i++){

if(i%2==0){
    a[i]=a[i]+10;
}
else{
    a[i]=a[i]*2;
}

printf(" %d ",a[i]);
}
return 0;
}