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

int main(){
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int*)malloc(s.size*sizeof(int));

     struct stack* s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

    //PUSHING ELEMENT MANUALLY
    s->arr[0]=4;
    s->top++;

   //CHECK EMPTY
   if(isEMPTY(s)){
    printf("stack is empty");
   }
   else{
    printf("Not empty");
   }

   return 0;

}