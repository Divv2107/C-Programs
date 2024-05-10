#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
   char str[50];
    fp=fopen("abc.txt","r");
    //fprintf(fp,"%s","ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    fgets(str,50,fp);
    printf("before fseek function, file contents are %s\n",str);
    fseek(fp,-10,SEEK_CUR);
    fgets(str,50,fp);
    printf("after SEEK_SET to 21=%s\n",str);
    fclose(fp);
    return 0;
}
