#include<stdio.h>
#include<stdlib.h>
 struct student{
        int roll;
        char name;
        int marks;
        float percentage;

    };
    int main(){

 struct student* k;
 k=(struct student*)malloc(sizeof(struct student));
 k->roll=1;
  k->name='a';
   k->marks=51;
    k->percentage=61;

    printf("%d\n",k->roll);
     printf("%c\n",k->name);
      printf("%d\n",k->marks);
       printf("%f\n",k->percentage);
    
     printf("\n");
    

    struct student* l;
 l=(struct student*)malloc(sizeof(struct student));
 l->roll=10;
  l->name='b';
   l->marks=91;
    l->percentage=71;
    printf("%d\n",l->roll);
     printf("%c\n",l->name);
      printf("%d\n",l->marks);
       printf("%f\n",l->percentage);
    


}