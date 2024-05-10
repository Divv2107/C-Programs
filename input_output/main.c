#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("tech.txt","w");
    printf("input your data & press enter to exit\n");
    while((ch=getchar())!="\n")
    {
        putc(ch,fp);
    }
    fclose(fp);
    return 0;
}
