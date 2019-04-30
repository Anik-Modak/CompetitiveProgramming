#include<stdio.h>
int main()
{
int a,b,c,n,i,m,m1,k,s=0;
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        m=a;
    else if(b>c)
        m=b;
    else
        m=c;
      if(a<b&&a<c)
        m1=a;
    else if(b<c)
        m1=b;
    else
        m1=c;
    k=(a+b+c-m-m1);
    s=s+1;
    printf("Case %d: %d\n",s,k);
}
return 0;
}

