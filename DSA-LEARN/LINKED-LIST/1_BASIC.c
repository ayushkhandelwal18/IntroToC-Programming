#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;

    //allocate memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    
    //linked first and second nodes
    head->data=7;
    head->next =second;

    //linked second and third nodes
    second->data=11;
    second->next=third;

     //terminate the list at the third node
    third->data=22;
    third->next=NULL;
    return 0;
}