#include<stdio.h>
int reverse(long n)
{
    long r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d\n",s);
    return s;
}
int check(long a)
{
    long m,n,i=1;
    while(a>10){
        m=a/(10*i);
        n=a%10;
        i=i*10;
        if(m<10)
            break;
    }
    if(m==n||a<10)
        return 1;
    else
        return 0;
}
int main()
{
    long long n,s,i,t,a,c=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        c=0;
        while(1)
        {
            s=reverse(n);
            a=s+n;
            c++;
            if(check(a))break;
            n=a;
        }
        printf("%lld %lld\n",c,a);
    }
    return 0;
}
