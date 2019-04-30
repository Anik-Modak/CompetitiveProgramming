#include<stdio.h>
#include<math.h>
int main()
{
long long exp(long long a,long long n)
{
    if(n==0)
        return 1;
    long long ret=exp(a*a,n/2);
    if(n%2==1)
        ret=ret*a;
    return ret;
}
    long long n,t,i,j,b,d,a,r,s,c;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        scanf("%lld",&n);
        l:a=n;
        s=0;
        while(n>0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        n=a+s;
        c=c+1;
        for(j=0;j<=10;j++)
        {
            if(exp(10,j)<=n&&n<exp(10,j+1))
            {
                d=n/exp(10,j);
                b=n%10;
            }
        }
        if(d!=b)goto l;
        printf("%lld %lld\n",c,n);
    }
    return 0;
}
