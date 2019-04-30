#include<stdio.h>
#include<string.h>
#define Report "report"
int main()
{
    char c[10];
    int i,t,a,n,r,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&c);
        r=strcmp(c,Report);
        if(r==0)
        {
            printf("%d\n",sum);
        }
        else{
            scanf("%d",&n);
            sum=sum+n;
        }
    }
    return 0;
}
