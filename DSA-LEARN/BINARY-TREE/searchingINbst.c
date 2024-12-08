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


struct node* search(struct node* root,int key){
    if(root==NULL) return NULL;

    if(key==root->data) return root;

    else if(key<root->data) return search(root->left,key);

    else return search(root->right,key);
}

int main(){

struct node* p = createnode(5);
struct node* p1 = createnode(3);
struct node* p2 = createnode(6);
struct node* p3 = createnode(1);
struct node* p4 = createnode(4);

   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;

 
  struct node* n = search(p,4);
 if(n!=NULL)  {
    printf("Found : %d",n->data );
 }
 else{
    printf(" not Found " );
}  
  return 0;
       

}