#include <bits/stdc++.h>
using namespace std;

long long f(long long n)
{
    if(n<=1) return n;
    return f(n-1)+f(n-2);
}

long long power(long long a,long long n)
{
    if(n==0)
        return 1;
    long long ret=power(a*a,n/2);
    if(n%2==1)
        ret=ret*a;
    return ret;
}

int main()
{
    long long n,k,M,r,s,T,i;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld%lld%lld",&n,&k,&M);
        r = f(n+2);
        s = (power(k,r))%M;
    printf("Case %lld: %lld\n",i,s);
    }
    return 0;
}
