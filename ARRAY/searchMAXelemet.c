#include<stdio.h>
int main(){

    int a[7]={-12,-13,-16,-17,-11,-19,-18};
    int max = a[0];

    for(int i=0;i<7;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max);

    return 0;
}