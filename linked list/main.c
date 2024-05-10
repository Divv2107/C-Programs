#include <stdio.h>
#include <stdlib.h>

struct node{
     int data;
     struct node* link;
 };
int main()
{

   struct node* head=malloc(sizeof(struct node));
   head->data=10;
   head->link=NULL;

   struct node* ptr=malloc(sizeof(struct node));
   ptr->data=20;
   ptr->link=NULL;
   head->link=ptr;

   ptr=malloc(sizeof(struct node));
   ptr->data=30;
   ptr->link=NULL;
   head->link->link=ptr;

 /*  int data=5;
   head=add_at_beg(head,data);
   ptr=head;
 while(ptr!=NULL)
 {
    printf(" %d",ptr->data);
    ptr=ptr->link;
 }
 printf("\n");
   count_of_nodes(head);
}
void count_of_nodes(struct node* head)
{
  int count=0;
  if(head==NULL)
  printf("list is empty");
  struct node *ptr=NULL;
  ptr=head;
  while(ptr!=NULL)
  {
      count++;
      ptr=ptr->link;
  }
  printf("the number of nodes:%d",count);

}
/*void print_data(struct node* head)
{
 if(head==NULL)
    printf("list is empty");
 struct node*ptr=NULL;
 ptr=head;
 while(ptr!=NULL)
 {
    printf(" %d",ptr->data);
    ptr=ptr->link;
 }
}*/
int add_at_beg(struct node*head,int d)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->data=d;
    temp->link=NULL;
    temp->link=head;
  head=temp;
    return head;
}
int add_at_add(struct node* head,int d)
{
   struct node* temp=malloc(sizeof(struct node));
    temp->data=d;
    temp->link=NULL;
    temp->link=ptr;
     head=temp;
    return head;
}

