#include<stdio.h>
int main(){

int a[7]={1,2,3,4,5,6,7};
int se=0;
int so=0;

for(int i=0;i<7;i++){

if(i%2==0){
   se=se+a[i];
}
else{
    so=so+a[i];
}

}
printf("%d" , so-se);
return 0;
}