#include<stdio.h>
struct student{
    char name[20][50];
    char phone[50];
}dt;
int main()
{
    int i,n;
    FILE *fr;
    printf("Enter last 2 digit of Roll: ");
    scanf("%d",&n);
    fr=(fopen("student1styear.txt","r"));
    for(i=1;i<=48;i++){
        fscanf(fr," %[^\n]",dt.name);
        fscanf(fr,"%s",dt.phone);
        if(i==n)
            printf("\tName: %s\n\tPhone: %s\n",dt.name,dt.phone);
    }
    fclose(fr);
}
