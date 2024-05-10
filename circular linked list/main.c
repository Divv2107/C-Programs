#include <stdio.h>
#include <stdlib.h>
struct node{
     int data;
     struct node* next;
 };

int main()
{

    int data=34;
    struct node* tail;
    tail=circular_linked(data);
    printf("%d",tail->data);
    return 0;
}
int circular_linked(int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}
