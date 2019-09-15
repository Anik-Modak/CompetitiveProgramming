#include <stdio.h>
int fibonacci(long long n)
{
    long long i,a=1,b=1,s=0;
    for(i=1; i<=n; i++)
    {
        if(i==1)
            continue;
        if(i==2)
            continue;
        s=a+b;
        a=b;
        b=s;
    }
    return s;
}
int main()
{
    long long n,m;
    while(scanf("%lld",&n)!=EOF)
    {
        m=fibonacci(n);
        printf("The Fibonacci number for %lld is %lld\n",n,m);
    }
    return 0;
}
