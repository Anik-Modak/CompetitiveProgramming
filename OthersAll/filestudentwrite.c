#include<stdio.h>

int main()
{
    char c[10][10],c1[10][10];
    int i;
    FILE *fp;
    fp=fopen("student.txt","a");
    for(i=1;i<=5;i++){
        scanf(" %[^\n]",c);
        scanf("%s",c1);
        fprintf(fp,"%s\n%s\n",c,c1);
    }
    fclose(fp);
}
