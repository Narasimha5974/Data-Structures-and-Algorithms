#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node*link;
};

int main(){
  
  struct Node*d1= malloc(sizeof(struct Node));
  d1->data=10;
  d1->link=NULL;
  
  struct Node*d2= malloc(sizeof(struct Node));
  d2->data=20;
  d2->link=NULL;
  
  struct Node*d3=malloc(sizeof(struct Node));
  d3->data=30;
  d3->link=NULL;
  
  struct Node*d4=malloc(sizeof(struct Node));
  d4->data=40;
  d4->link=NULL;

  d1->link=d2;
  d2->link=d3;
  d3->link=d4;
  struct Node*head=d1;   //out put : 10->20->30->

 struct Node*s1=malloc(sizeof(struct Node));
  s1->data=32;
  s1->link=NULL;
  
   //add begin
   head=NULL;
 s1->link=d1;
 head=s1;
 
  struct Node*s2=malloc(sizeof(struct Node));
  s2->data=222;
  s2->link=NULL;
  
   //add begin
   head=NULL;
 s2->link=s1;  // out put : 102->32->10->20->30->
 head=s2;
 
  struct Node*s3=malloc(sizeof(struct Node));
  s3->data=60;
  s3->link=NULL;
  
   //add begin
   head=NULL;
 s3->link=s2;  // out put : 102->32->10->20->30->
 head=s3;
 
 //delete end
  d3->link=NULL;   //out put : 102->32->10->20->
  free(d4);
  
  //delete at begin
if(head != NULL){
  head=head->link;
  free(s3);
}                       //out put : 222->32->10->20->30->

  while(head != NULL){
    printf("%d->",head->data);
    head=head->link;
  }
}
