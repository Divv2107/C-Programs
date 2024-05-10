#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char  name[25];int age;

    fp=fopen("abc.txt","r");
   // fprintf(fp,"%s","ABCDEFGHIJKLMNOPQRSTUVWXYZ");
     if(fp==NULL)
     {
         printf("error");

     }
     else{
       // printf("enter your name & age\n");
//scanf("%s %d",name,&age);
        fscanf(fp,"%s %d",name,&age);
       printf("name :%s age :%d",name,age);
     }

    fclose(fp);


    return 0;
}
