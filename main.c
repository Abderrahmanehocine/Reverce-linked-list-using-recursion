#include <stdio.h>
#include <stdlib.h>
#define sn struct node

struct node{
 int data;
 sn* next;
};
// add function to add new node
sn* add(sn* h){
  if(h==NULL){
    sn* newNode=(sn*)malloc(sizeof(sn));
    printf("Enter data: ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
  }
  h->next=add(h->next); //recursion
  return h->next;
}
// print function to print data in the nodes
void print(sn* p){
  if(p == NULL){
    return;
 }
  printf("%d ",p->data);
  print(p->next);
}
// reverce function to print data in the nodes reversed
void reverce(sn* p){
   if(p == NULL){
    return;
  }
  reverce(p->next);
  printf("%d ",p->data);
}
//delete function to delete all the nodes in the heap
void delete(sn* p){
  if(p==NULL){
    return;
  }
  delete(p->next);
  free(p);
}

int main(){
  sn *head=NULL,*temp;
  // add 4 nodes 
  head=add(head);
  temp=head;
  temp=add(temp);
  temp=add(temp);
  temp=add(temp);
  printf("\n");
  //call print 
  print(head);
  printf("\n");
  //call reverce
  reverce(head);
  printf("\n");
  //call delete
  delete(head);
}
