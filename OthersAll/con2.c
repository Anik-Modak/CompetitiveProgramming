#include<stdio.h>
int main()
{
int n,a,b,i,s,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s=0;
    scanf("%d%d",&a,&b);
    s=a+b;
    c=c+1;
    printf("Case %d: %d\n",c,s);
}
return 0;
}
