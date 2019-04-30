#include<stdio.h>
int main()
{
    long long t,n,s1,s2,i;
    while(1){
    s1=0; s2=0;
    scanf("%lld",&t);
    if(t==0) break;
    for(i=1;i<=t;i++){
        scanf("%lld",n);
        s1=s1+n;
        s2=s1;
    }
    printf("%lld\n",s1+s2);
    }
    return 0;
}
