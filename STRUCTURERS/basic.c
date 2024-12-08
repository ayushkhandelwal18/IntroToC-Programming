#include<stdio.h>
int main(){
    struct college // user defined data type
    {
        char name;
        int id;
        float marks;
    };
    struct college ayush;
    ayush.id=2076;
    ayush.marks;
   printf("Enter marks of ayush");
     scanf("%f",&ayush.marks);
   
    

    struct college mohit;
    mohit.id=2077;
    mohit.marks=100;

    printf("%d\n",ayush.id);
    printf("%d\n",mohit.id);
    printf("%f",ayush.marks);


    
    return 0;
}