#include<stdio.h>
#include<math.h>
int main()
{
    long long n,t,s;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        s=(sqrt(1+8*n)-1)/2;
        printf("%lld\n",s);
    }
    return 0;
}
