#include<stdio.h>
int main()
{
int n,k,a,b,i,x,m;
while(scanf("%d%d",&n,&k)!=EOF)
{
    x=n;
   l:a=n/k;
    b=n%k;
    x=x+a;
    if(a>1){
        a=a+b;
        n=a;
        goto l;
    }
    printf("%d\n",x);
}
return 0;
}
