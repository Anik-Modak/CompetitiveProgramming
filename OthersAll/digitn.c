#include<stdio.h>

int digit(long long n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s++;
    }
    return s;
}

int main()
{
    long long n,m;
    scanf("%lld",&n);
    m=digit(n);
    printf("%lld\n",m);
    return 0;
}
