#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*link;
};
int main(){
  struct Node*head=NULL;
  int NUM=10;       //add at end
  struct Node*d1=malloc(sizeof(struct Node));       //create a node with data 10
  d1->data=NUM;
  d1->link=NULL;
  head=d1;        //  create  a link
  NUM=20;         //create and attached d1
  struct Node*d2=malloc(sizeof(struct Node));     //  another data  20
  d2->data=NUM;
  d2->link=NULL;      //  attaching link
   struct Node*TT=head;     //finding last  node
   while(TT->link!=NULL){
     TT=TT->link;
   }
   TT->link=d2;   //create and attached node of data 20 and add with data 45
   NUM=45;
   struct Node*new=malloc(sizeof(struct Node));
  new->data=NUM;
  new->link=NULL;
  TT=head;
   while(TT->link!=NULL){
     TT=TT->link;
   }
   TT->link=new;
   // another data 25
   NUM=25;
   // create a node with data 25
   struct Node*new1=malloc(sizeof(struct Node));
  new1->data=NUM;
  //adding of node at begin
  new1->link=head;
  head=new1;    // starts with delete last node
   while(head!=NULL){
     printf("%d->",head->data);
     head=head->link;
   }
}
