#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int * arr;
};

int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

void enque(struct queue *q,int val){
    if(isfull(q)){
        printf("Queue is Full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int deque(struct queue *q){
    int a=-1;
    if(isempty(q)){
        printf("queue is full");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main(){

     struct queue q;
     q.size=100;
     q.f=q.r=-1;
     q.arr=(int*)malloc(q.size*sizeof(int));

     if(isempty(&q)){
        printf("Queue is empty\n");
     }

     enque(&q,12);
      enque(&q,14);
     

       printf("dequeing element %d\n", deque(&q));
       printf("dequeing element %d\n", deque(&q));

   if(isempty(&q)){
        printf("Queue is empty\n");
     }


    return 0;
}