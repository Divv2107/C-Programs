#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   char ch;
   fp=fopen("student.txt","r");
   if(get(fp)!=EOF)
   {
       printf("file is not found");
   }
   else
    printf("file is created succesfully");
    fclose(fp);
    return 0;
}
