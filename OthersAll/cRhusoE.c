#include<stdio.h>
int main()
{
int t,n,k,i,j,p,m,c=0;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    scanf("%d%d%d",&n,&k,&p);
    if(p>n)
        m=p%n;
    else
        m=p;
    for(j=1;j<=m;j++)
    {
        k++;
    }
    if(k>n)
        k=k-n;
    else
        k=k;
        c=c+1;
      printf("Case %d: %d\n",c,k);
}
return 0;
}
