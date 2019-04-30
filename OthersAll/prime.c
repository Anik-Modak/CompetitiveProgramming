#include<stdio.h>
#include<math.h>
int Prime(long long n)
{
    long long i;
    if(n!=2&&n%2==0) return 0;
    for(i=3; i<=sqrt(n); i=i+2) if(n%i==0) return 0;
    return 1;
}
int main()
{
    long long n,i,p,a;
    scanf("%lld",&n);
    printf("%d\n",Prime(n));
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            p=Prime(i);
            if(p==1) a=i;
        }
    }
    printf("%lld\n",a);
    return 0;
}
