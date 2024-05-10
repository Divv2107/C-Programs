#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
  int i,sum=0;
  printf("\n\n total count=%d",argc);
  for(i=0;i<argc;i++)
  {
    printf("\n\n the argv[%d]=%s",i,argv[i]);
    sum+=atoi(argv[i]);
    }
  printf("\n sum is=%d",sum);
  printf("\n\n\n");
    return 0;
}
