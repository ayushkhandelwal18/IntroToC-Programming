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

int main()
{
    
    top= push(top,100);
     top= push(top,200);
      top= push(top,300);
       top= push(top,400);
        top= push(top,500);

     traversal(top);


        int element =pop(top);
        printf("\n\npopped element is %d\n",element);
    traversal(top);
    return 0;
}