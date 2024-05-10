#include<stdio.h>
int main()
{
  int seen[10]={0};
  int num;
  printf("enter the numbers:");
  scanf("%d",&num);
  while(num>0)
  {
      int rem;
    rem=num%10;
    if(seen[rem]==1)
    break;
    seen[rem]=1;
    num=num/10;
  }
  if(num>0)
  {
    printf("yes");
  }
  else
  printf("no");

  return 0;
}
