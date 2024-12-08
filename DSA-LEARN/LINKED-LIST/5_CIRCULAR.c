#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* head){
  struct Node* ptr=head;

    
    do{
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }while (ptr!=head);
 
}

struct Node* insertAtfirstr(struct Node* head,int data){
  struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;

  struct Node* p=head->next;
  while(p->next!=head){
    p=p->next;
  }
  
  p->next=ptr;
  ptr->next=head;
  head=ptr;
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
    fourth->next=head;

    printf("Before insertion : \n");  
     traversal(head);

    printf("After insertion : \n");
     head=insertAtfirstr(head,1000);
     traversal(head);


    return 0;


}