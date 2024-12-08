#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr){

    while (ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
 
}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    //allocate memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
    //linked first and second nodes
    head->data=7;
    head->next =second;

    //linked second and third nodes
    second->data=11;
    second->next=third;

    
    //linked  third and fourth nodes
    third->data=22;
    third->next=fourth;

      //terminate the  linked list at the fourth node
    fourth->data=44;
    fourth->next=NULL;

     traversal(head);

    return 0;


}