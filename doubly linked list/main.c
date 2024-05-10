#include <stdio.h>
#include <stdlib.h>

 struct node{
     struct node* prev;
     int data;
     struct node* next;
 };

int main()
{

   struct node* head=NULL;
   struct node* ptr;
   head=add_to_empty(head,45);
   head=add_to_beg(head,35);
   head=add_to_end(head,55);
   ptr=head;
   while(ptr!=NULL)
   {
     printf("%d ",ptr->data);
     ptr=ptr->next;
   }

    return 0;
}
int add_to_empty(struct node* head,int data)
{
   struct node* temp=malloc(sizeof(struct node));
   temp->prev=NULL;
   temp->data=data;
   temp->next=NULL;
   head=temp;
   return temp;

}
int add_to_beg(struct node* head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
int add_to_end(struct node* head,int data)
{

    struct node* temp,*tp;
    temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while(tp->next!=NULL)
    {
       tp=tp->next;
       tp->next=temp;
       temp->prev=tp;
       return head;
    }
}
