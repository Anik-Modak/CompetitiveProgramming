#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,m;
    char c[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",c[i]);
    }
    if(n>16&&n%16!=0)
        m=((n/16)+1)*4;
    else if(n>16&&n%16==0)
        m=(n/16)*4;
    else
        m=4;
    for(i=0,j=1;j<=m;j++)
    {
        printf("%s: Happy\n",c[i++]);
        if(i==n)
            i=0;
        printf("%s: birthday\n",c[i++]);
        if(i==n)
            i=0;
        printf("%s: to\n",c[i++]);
        if(i==n)
            i=0;
        if(j==3||j==7||j==11||j==15||j==19)
            printf("%s: Rujia\n",c[i++]);
        else
            printf("%s: you\n",c[i++]);
        if(i==n)
            i=0;
    }
    return 0;
}


