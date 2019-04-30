#include<stdio.h>
#include<math.h>
long long power(long long a,long long n)
{
    if(n==0) return 1;
    long long ret=power(a*a,n/2);
    if(n%2==1) ret=ret*a;
    return ret;
}
int main()
{
    long long a,b,x;
    scanf("%lld%lld",&a,&b);
    x=power(a,b);
    printf("%lld\n",x);

    return 0;
}
