
#include<stdio.h>
int main(){
    FILE *fp;
    char name[25];
    int age;
    fp=fopen("f1.txt","w");
    if(fp==NULL){
        printf("error");
    }
    else
    {
        printf("enter the name & age\n");
        scanf("%s%d",name,&age);
        fprintf(fp,"%s %d",name,age);
    }
    fclose(fp);
}
