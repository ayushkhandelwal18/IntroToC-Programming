#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};

int isEMPTY(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }

    else{
        return 0;
    }
}

int isFULL(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr,int value){
    if(isFULL(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack* ptr){
    if(isEMPTY(ptr)){
        printf("STACK underflow");
    }
    else{
        int value =ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int main(){
    
    struct stack* s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
  printf("Stack has been created successfully\n");

  printf("\nBefore pushing\n");
  printf("empty : %d\n",isEMPTY(s));
  printf("full : %d\n",isFULL(s));

  push(s,100);
  push(s,200);
  push(s,300);
  push(s,400);
  push(s,500);
  push(s,600);
  push(s,700);
  push(s,800);
  push(s,900);
  push(s,1000);
   
  printf("\nAfter pushing\n");
  printf("empty : %d\n",isEMPTY(s));
  printf("full : %d\n",isFULL(s));

  printf("\nAfter Pop\n");
  printf("Poped %d from the stack\n ",pop(s));
  printf("Poped %d from the stack\n ",pop(s));
   printf("empty : %d\n",isEMPTY(s));
  printf("full : %d\n",isFULL(s));

  


   return 0;

}