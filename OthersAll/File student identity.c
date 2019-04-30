#include<stdio.h>
struct student{
    char name[20][50];
    char phone[50];
}stdinfo;
int main()
{
    int i;
    FILE *fp;
    fp=(fopen("student1styear.txt","a"));
    for(i=1;i<=48;i++){
        scanf(" %[^\n]",stdinfo.name);
        scanf("%s",stdinfo.phone);
        fprintf(fp,"%s\n%s\n",stdinfo.name,stdinfo.name);
    }
    fclose(fp);
}
