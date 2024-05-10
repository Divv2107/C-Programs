#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("student.txt","r");
    if(fp==NULL)
        printf("\n\n file not found");
    else{
        while((ch=getc(fp))!=EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fp);
    return 0;
}
