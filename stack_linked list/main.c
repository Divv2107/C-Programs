#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
}*top=NULL;

void push(int data)
{
  struct node* newNode;
  newNode=malloc(sizeof(newNode));
  if(newNode==NULL)
  {
      printf("stack is overflow");
      exit(1);
  }
  newNode->data=data;
 // newNode->link=NULL;
  newNode->link=top;
  top=newNode;
}
void print()
{
    struct node* temp;
    temp=top;
    printf("the stack elements are:");
    while(temp)
    {
        printf(" %d",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{

   int choice,data;
   while(1)
   {
       printf("1.Push\n");
       printf("2.Print\n");
       printf("3.Quit\n");
       printf("enter your choice:");
       scanf(" %d",&choice);
       switch(choice)
       {
           case 1:printf("enter the element to be pushed:");
                  scanf(" %d",&data);
                 push(data);
                  break;
           case 2:print();break;
           case 3:exit(1);
           default: printf("wrong choice\n");
                     break;
       }
   }
    return 0;
}
