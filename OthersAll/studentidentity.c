#include<stdio.h>
#include<string.h>
struct student{
    char name[20][50];
    char phone[50];
    int k;
    int j;
}stdinfo;
department(char c[10])
{
    int n;
    n=c[6]-'0';
    if(n==6){
        printf("Department: CSE\n");
        stdinfo.k=1;}
    else if(n==7)
        printf("Department: ICE\n");
    else if(n==5)
        printf("Department: ACCE\n");
    else if(n==8)
        printf("Department: MSE\n");
    else if(n==9)
        printf("Department: EEE\n");
    else if(n==4)
        printf("Department: APEE\n");
    else{
        printf("This student is not Engineering Faculty\n");
       stdinfo.k=2;
    }
}
session(char roll[10])
{
    int n;
    n=roll[1]-'0';
    switch(n){
       case 0: printf("Session: 2009-2010\n");
            break;
       case 1: printf("Session: 2010-2011\n");
            break;
       case 2: printf("Session: 2011-2012\n");
            break;
       case 3: printf("Session: 2012-2013\n");
            break;
       case 4: printf("Session: 2013-2014\n");
            break;
       case 5: printf("Session: 2014-2015\n");
            break;
       case 6: printf("Session: 2015-2016\n");
            break;
       case 7: printf("Session: 2016-2017\n");
            stdinfo.j=1;
            break;
    }
}
hall(char c[10])
{
    int n,m;
    n=c[4]-'0';
    m=c[3]-'0';
    if(n==1&&m==0)
        printf("Sher-e Bangla Fazlul Haque Hall\n");
    else if(n==2&&m==0)
        printf("Shah Mukhdum Hall\n");
    else if(n==3&&m==0)
        printf("Nawab Abdul Latif Hall\n");
    else if(n==4&&m==0)
        printf("Syed Amer Ali Hall\n");
    else if(n==5&&m==0)
        printf("Shaheed Shamsuzzoha Hall\n");
    else if(n==6&&m==0)
        printf("Shaheed Habibur Rahman hall\n");
    else if(n==7&&m==0)
        printf("Matihar Hall\n");
    else if(n==8&&m==0)
        printf("Madar Bux Hall\n");
    else if(n==9&&m==0)
        printf("Shaheed Suhrawardy Hall\n");
    else if(n==1&&m==1)
        printf("Bangabandhu SMR Hall\n");
    else if(n==2&&m==1)
        printf("Mannujan Hall\n");
    else if(n==3&&m==1)
        printf("Rokeya Hall\n");
    else if(n==4&&m==1)
        printf("Tapasihi Rabeya Hall\n");
    else if(n==5&&m==1)
        printf("Begum Khaleda zia Hall\n");
    else if(n==6&&m==1)
        printf("Rahamatunnesa Hall\n");
    else if(n==7&&m==1)
        printf("Fazilatunnesa Hall\n");
    else
        printf("There is no hall for this student\n");
}
file(int n)
{
    FILE *fr;
    int i;
        fr=(fopen("student1styear.txt","r"));
        for(i=1;i<=48;i++){
            fscanf(fr," %[^\n]",stdinfo.name);
            fscanf(fr,"%s",stdinfo.phone);
            if(i==n)
            printf("\tStudent name: %s\n\tPhone number: %s\n",stdinfo.name,stdinfo.phone);
        }
        fclose(fr);
}
int main()
{
    char roll[10];
    int i,n;
    printf("Enter Roll of Engineering Faculty student: ");
    scanf("%s",roll);
    i=1;
    while(i<=4){
        printf("\t");
        if(i==1)
            department(roll);
        //if(stdinfo.k==2)break;
        if(i==2)
            session(roll);
        if(i==3){
            printf("Hall name: ");
            hall(roll);
        }
        if(i==4&&stdinfo.k==1&&stdinfo.j==1){
            printf("Enter last 2 digit of Roll: ");
            scanf("%d",&n);
            file(n);
        }
        i++;
    }
}

