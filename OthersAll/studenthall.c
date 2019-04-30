#include<stdio.h>
#include<string.h>
char c[10];
int k;
department()
{
    int n;
    n=c[6]-'0';
    if(n==6)
        printf("Department: CSE\n");
    else if(n==7)
        printf("Department: ICE\n");
    else if(n==5)
        printf("Department: ACEE\n");
    else if(n==8)
        printf("Department: MSE\n");
    else if(n==9)
        printf("Department: EEE\n");
    else if(n==4)
        printf("Department: APEE\n");
    else{
        printf("This student is not Engineering Faculty\n");
        k=1;
    }
}
session()
{
    int n;
    n=c[1]-'0';
    if(n==0)
        printf("Session: 2009-2010\n");
    else if(n==1)
        printf("Session: 2010-2011\n");
    else if(n==2)
        printf("Session: 2011-2012\n");
    else if(n==3)
        printf("Session: 2012-2013\n");
    else if(n==4)
        printf("Session: 2013-2014\n");
    else if(n==5)
        printf("Session: 2014-2015\n");
    else if(n==6)
        printf("Session: 2015-2016\n");
    else if(n==7)
        printf("Session: 2016-2017\n");
}
hall()
{
    int n,m;
    n=c[4]-'0';
    m=c[3]-'0';
    if(n==1&&m==0)
        printf("Hall name: Sher-e Bangla Fazlul Haque Hall\n");
    else if(n==2&&m==0)
        printf()
int main()
{
    int i;
    printf("Enter Roll number : ");
    scanf("%s",c);
    for(i=1;i<=2;i++){
        if(i==1)
            department();
        if(k==1)break;
        if(i==2)
            session();
        if(i==3)
             hall();
    }
}
