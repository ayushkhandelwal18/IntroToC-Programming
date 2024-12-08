#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int val){
    struct node* n;
   n=(struct node*)malloc(sizeof(struct node));
   n->data=val;
   n->left=NULL;
   n->right=NULL;
   
   return n;
}

void inORDER(struct node* root){
    if(root!=NULL){
        inORDER(root->left);
        printf("%d ",root->data);
        inORDER(root->right);
        
    }
}

int main(){

struct node* p = createnode(4);
struct node* p1 = createnode(1);
struct node* p2 = createnode(6);
struct node* p3 = createnode(5);
struct node* p4 = createnode(2);

   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;

  inORDER(p);
       

}