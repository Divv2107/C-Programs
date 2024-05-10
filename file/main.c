#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   fp=fopen("student.txt","w");
   if(fp==NULL)
   {
       printf("file is not found");
   }
   else
    printf("file is created succesfully");
    return 0;
}
