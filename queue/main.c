#include <stdio.h>
#include <stdlib.h>

int queue[5],f=-1,r=-1;
void rear();
void front();
void show();
int main()
{
  int ch;
  printf("1.REAR\n");
  printf("2.FRONT\n");
  printf("3.SHOW\n");
  printf("4.EXIT");
  while(1)
  {
      printf("\n enter the your choice:");
      scanf(" %d",&ch);
      switch(ch)
      {
          case 1:rear();
                 break;
          case 2:front();
                 break;
          case 3:show();
                break;
          case 4:exit(0);
                 break;
        default:printf("invalid option");
  }
  }
    return 0;
}
void rear()
{
    int item;
    if(r==5-1)
    {
        printf("queue is full");
    }
    else{
        if(f==-1)
        {
            f=0;
        }
        printf("insert element is queue:");
        scanf(" %d",&item);
        r=r+1;
        queue[r]=item;
    }
}

void front()
{
    if(f==-1)
    {
        printf("queue is empty");
    }
    else{
        printf("deleted element is %d",queue[f]);
        f=f+1;
    }
}

void show()
{
    int i;
    if(f==-1)
    {
        printf("queue is empty");
    }
    else{
        printf("the queue elements are:");
        for(i=f;i<=r;i++)
        {
            printf(" %d",queue[i]);
        }
    }
}
