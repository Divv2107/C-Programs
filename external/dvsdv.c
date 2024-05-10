#include<stdio.h>
int main(int argc,char argv[])
{
  int i;
  printf("\n\n total arguments count=%d",argc);
  for(i=0;i<argc;i++)
  {

  printf("\n\n the argv[%d]=%s",i,argv[i]);
  }
  printf("\n\n\n");
  return 0;

}
