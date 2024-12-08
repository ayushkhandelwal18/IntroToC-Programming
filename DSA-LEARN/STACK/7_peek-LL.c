#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct  Node* next;
  };

  struct Node* top=NULL; //global variable

  void traversal(struct Node* ptr){

    while (ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
 
}

  int isEmpty(struct Node* top){
    if(top==NULL){
        return 1;
    }

    else{
        return 0;
    }
  }

  int isFULL(struct Node* top){
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }

    else{
        return 0;
    }
  }

struct Node* push(struct Node* top,int x){
    if(isFULL(top)){
        printf("Stack Overflow");
    }
    
    else{
        struct Node* n=(struct Node*)malloc(sizeof(struct Node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}

int pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Under Overflow");
    }
    
    else{
        struct Node* n=tp;
      top=tp->next;
      int x=n->data;
     free(n);
      return x;
    }
}

int peek(int pos){
   struct  Node* ptr= top;
    for(int i=0 ; i< pos-1 && ptr!=NULL; i++){
       ptr= ptr->next;
 }

 if(ptr!=NULL){
    return ptr->data;
 }

 else{
    return -1;
 }
}

int main()
{
    
    top= push(top,100);
     top= push(top,200);
      top= push(top,300);
       top= push(top,400);
        top= push(top,500);

     traversal(top);


for(int j=1;j<=5;j++){
printf("\nVAlue at position %d is : %d\n ", j ,peek(j));
}

    return 0;
}