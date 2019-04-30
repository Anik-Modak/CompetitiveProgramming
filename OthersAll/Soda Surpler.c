#include<stdio.h>
int main()
{
int n,t,k,a,b,i,x,m,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        s=0;
        x=n+m;
       l:a=x/k;
        b=x%k;
        s=s+a;
        if(a>0){
            x=a+b;
            goto l;
        }
    printf("%d\n",s);
    }
return 0;
}

