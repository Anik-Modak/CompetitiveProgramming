#include<stdio.h>
int main()
{
int x,n,i,m,a[100],c=0;
scanf("%d%d",&x,&n);
for(i=0;i<x;i++)
{
    scanf("%d",&a[i]);
}
m=n-1;
for(i=0;i<x;i++)
{
    if(a[m]<=a[i]&&a[i]!=0)
            c=c+1;
}
printf("%d\n",c);
return 0;
}
