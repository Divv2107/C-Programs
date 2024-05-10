#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("student.txt","r");
    if(fp==NULL)
        printf("unable to create file");
        else
            printf("file opened succesfully");
        fclose(fp);
    return 0;
}
