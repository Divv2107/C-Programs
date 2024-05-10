#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{ int i;
   printf("\n\n total argument count=%d",argc);
   for(i=0;i<argc;i++){
    printf("\n\n argv[%d]=%s\n",i,argv[i]);

   }
   printf("\n\n\n\n");
   return 0;
}
