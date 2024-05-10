#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("tech.txt","w");
    printf("input your data & press enter to exit\n");
    while((ch=getchar())!='\n')
    {
        putc(ch,fp);
    }
    //fclose(fp);
    fp=fopen("tech.txt","r");
    printf("your data is \n");
    while((ch=getchar())!=EOF)
    {
        printf("%c",ch);
    }
     fclose(fp);
    return 0;
}
