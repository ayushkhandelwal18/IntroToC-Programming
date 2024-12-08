#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost price");
    scanf("%d",&cp);

    int sp;
    printf("Enter selling price");
    scanf("%d",&sp);

    if(sp>cp){
        printf("we have profit and the profit is %d",sp-cp);
        }
       

    else{
        printf("We have loss and the loss is %d",cp-sp);
       }
       return 0;

}