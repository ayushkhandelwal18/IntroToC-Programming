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
 //CASE 1
struct Node* deleteFirst(struct Node* head){
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

 //CASE 2
struct Node* deleteAtINDEX(struct Node* head , int index){
    
    struct Node* p=head;
   struct Node* q=head->next;

   for(int i=0;i<index-1;i++){
    p=p->next;
    q=q->next;
   
   }
    p->next=q->next;
    free(q);
    return head;
}

//CASE 3
struct Node* deleteAtLast(struct Node* head){
    
    struct Node* p=head;
   struct Node* q=head->next;

  while(q->next!=NULL){
     p=p->next;
     q=q->next;
  }
  p->next=NULL;

  free(q);
   return head;
   
}

//CASE 4
struct Node* deleteWITHvalue(struct Node* head , int value){
    
    struct Node* p=head;
   struct Node* q=head->next;

 while(q->data!=value && q->next!=NULL){
    p=p->next;
    q=q->next;
   
   }

   if(q->data==value){
    p->next=q->next;
     free(q);
   }
    
    return head;
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


printf("Linked List BEfore Deltion :\n ");
     traversal(head);

head=deleteFirst(head);
// printf("Linked List AFTER Deltion :\n ");
//      traversal(head);

// head=deleteAtINDEX(head,2);
// printf("Linked List AFTER Deltion :\n ");
//      traversal(head);

//  head=deleteAtLast(head);
//  printf("Linked List AFTER Deltion :\n ");
//     traversal(head);

// head=deleteWITHvalue(head,11);
 printf("Linked List AFTER Deltion :\n ");
    traversal(head);

    return 0;


}