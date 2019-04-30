#include<stdio.h>
#include<math.h>

int PrimeNumber(long long n)
{
    int i,p=1;

    for(i=2; i<=sqrt(n); ++i)
    {
        if(n%i == 0)
        {
            p=0;
            break;
        }
    }
    return p;
}
int eprime(long long n)
{
    long r,s=0,a;
    a=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(a==s) return 0;
    s=PrimeNumber(s);
    return s;
}
int main()
{
    long long n,p,e;
    while(scanf("%lld",&n)!=EOF)
    {
        p=PrimeNumber(n);
        if(p==1)
        {
            e=eprime(n);
            if(e==1)
                printf("%lld is emirp.\n",n);
            else
                printf("%lld is prime.\n", n);
        }
        else
            printf("%lld is not prime.\n", n);
    }
    return 0;
}

