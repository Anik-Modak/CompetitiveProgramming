#include<stdio.h>
int main()
{
    long long i,j,t,f,s,a,e,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        sum=0;
        scanf("%lld",&f);
        for(j=1;j<=f;j++){
            scanf("%lld%lld%lld",&s,&a,&e);
            sum=sum+(s*e);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
