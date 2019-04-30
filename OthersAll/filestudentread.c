#include<stdio.h>
int main()
{
    int i;
    char c[10][10],c1[10][10];
    FILE *fr;
    fr=(fopen("student.txt","r"));
    for(i=1;i<=5;i++){
        fscanf(fr," %[^\n]",c);
        fscanf(fr,"%s",c1);
        if(i==2)
            printf("Name: %s\nPhone: %s\n",c,c1);
    }
    fclose(fr);
}
