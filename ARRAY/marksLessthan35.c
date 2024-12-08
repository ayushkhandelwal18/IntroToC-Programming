#include<stdio.h>
int main(){
    int marks[10]={7,17,27,37,47,57,67,77,87,97};
     
     for(int i=0;i<=9;i++){
        if(marks[i]<35)
        printf(" %d ",i);

     }
   
return 0;
}