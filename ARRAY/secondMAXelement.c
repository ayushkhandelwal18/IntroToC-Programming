#include<stdio.h>
#include<limits.h>

int main(){

    int a[7]={-12,-13,-16,-17,-11,-19,-18};
    int max = INT_MIN;
    int smax =INT_MIN;

    for(int i=0;i<7;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
     for(int i=0;i<7;i++){
        if(a[i]!=max && smax<a[i]){
            smax=a[i];
        }
    }
    printf("%d",smax);

    return 0;
}