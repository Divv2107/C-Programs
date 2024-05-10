#include <stdio.h>
#include <stdlib.h>

int fun(int,int);
int main()
{
  int sum=fun(3,4);
  printf("%d",sum) ;

    return 0;
}
static int fun(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
