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

struct Node* insertATfirst(struct Node* head,int data){
     struct Node* insert =(struct Node*)malloc(sizeof(struct Node));
      insert->data=data;
     insert->next=head;

     return insert;

}


struct Node* insertINbetween(struct Node* head,int data ,int index){
struct Node* insert =(struct Node*)malloc(sizeof(struct Node));
      
      struct Node* p =head;
      int i=0;
      while(i!=index-1){
         p=p->next;
         i++;
      }
      insert->data =data;
      insert->next=p->next;
      p->next=insert;
      return head;
    
}

struct Node* insertATend(struct Node* head,int data){
     struct Node* insert =(struct Node*)malloc(sizeof(struct Node));
     
     insert->data=data;
     struct Node* p=head;

     while(p->next!=NULL){
      p=p->next;
     }
     p->next =insert;
     insert->next =NULL;
     return head;

}

struct Node* insertAfterNODE(struct Node* head,struct Node* prevNode ,int data){
     struct Node* insert =(struct Node*)malloc(sizeof(struct Node));
      insert->data=data;
    
     
     insert->next= prevNode->next;
     prevNode->next=insert;
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

     printf("BEFORE INSERTION:\n");
    traversal(head);

     printf("\nAFTER INSERTION:\n");
    
   
    head = insertATfirst(head, 100);
//     head=insertINbetween(head,56,3);
//  head=insertATend(head,200);
   //head=insertAfterNODE(head , third , 450);
    traversal(head);

    return 0;


}