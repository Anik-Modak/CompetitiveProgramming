#include<stdio.h>
long long digit(long long n)
{
    long long i,a,b,s=n;
    i=1;
    while(i<3){
        n=n/10;
        if(i==1) a=n;
        if(i==2) b=n*10+s%10;
        i++;
    }
    if(a<b) s=a;
    else s=b;
    return s;
}
int main()
{
    long long i,n,s,r;
    scanf("%lld",&n);
    if(n>=0) s=n;
    else{
        r=-n;
        s=-digit(r);
    }
    printf("%lld",s);
    return 0;
}
