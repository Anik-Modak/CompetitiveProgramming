#include<stdio.h>
#include<string.h>

struct student
{
    char name[20][50];
    char phone[50];
    char roll[50];
} stdinfo;

void department(char c[10])
{
    int n;
    n=c[4]-'0';
    if(n==1)
        printf("\tDepartment: CSE\n");
    else if(n==3)
        printf("\tDepartment: Statistics\n");
    else if(n==5)
        printf("\tDepartment: Law\n");
    else if(n==8)
        printf("\tDepartment: English\n");
    else if(n==2)
        printf("\tDepartment: EEE\n");
    else if(n==4)
        printf("\tDepartment: Pharmacy\n");
    else
        printf("This is not our university student\n");
}

void session(char roll[10])
{
    int n;
    n=roll[1]-'0';
    switch(n)
    {
    case 0:
        printf("\tSession: 2009-2010\n");
        break;
    case 1:
        printf("\tSession: 2010-2011\n");
        break;
    case 2:
        printf("\tSession: 2011-2012\n");
        break;
    case 3:
        printf("\tSession: 2012-2013\n");
        break;
    case 4:
        printf("\tSession: 2013-2014\n");
        break;
    case 5:
        printf("\tSession: 2014-2015\n");
        break;
    case 6:
        printf("\tSession: 2015-2016\n");
        break;
    case 7:
        printf("\tSession: 2016-2017\n");
        break;
    case 8:
        printf("\tSession: 2017-2018\n");
        break;
    }
}

void file(long long n)
{
    FILE *fr;
    fr=(fopen("information.txt","r"));

    int i;
    for(i=1; i<=30; i++)
    {
        fscanf(fr,"%s",stdinfo.roll);
        fscanf(fr," %[^\n]",stdinfo.name);
        fscanf(fr,"%s",stdinfo.phone);

        if(n==atoi(stdinfo.roll))
        {
            printf("\n\tStudent ID: %s\n",stdinfo.roll);
            printf("\tStudent name: %s\n",stdinfo.name);
            department(stdinfo.roll);
            session(stdinfo.roll);
            printf("\tPhone number: %s\n",stdinfo.phone);
            break;
        }
    }
    fclose(fr);
}

int main()
{
    long long id;
    printf("Enter Roll of student: ");
    scanf("%lld",&id);
    file(id);
}


