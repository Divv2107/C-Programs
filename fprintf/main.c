#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
int main(){
    FILE *fp;
    char name[25];
    int age;
    fp=fopen("div.txt","r");
    if(fp==NULL){
        printf("error");
    }
    else
    {

        fscanf(fp,"%s %d",name,&age);
        printf("name:%s age:%d",name,age);
    }
    fclose(fp);
}
