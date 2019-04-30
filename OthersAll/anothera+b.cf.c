#include<stdio.h>
int main()
{
    long long a,b;
    while(scanf("%lld",&a)!=EOF){
    b=a-1;
    printf("%lld %lld\n",a-b,b);
    }
    return 0;
}
