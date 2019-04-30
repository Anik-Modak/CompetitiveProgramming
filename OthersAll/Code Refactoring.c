#include<stdio.h>
int main()
{
    long long n[5],t,k,a,c,i,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        a=1;c=0;
        scanf("%lld",&k);
        for(j=2;j<=100000;j++)
        {
            if(k%j==0){
                n[a++]=j;
                n[a++]=k/j;
                c=c+1;
            }
            if(c==2)
                break;
        }
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i,k,n[1],n[2],n[3],n[4]);
    }
    return 0;
}
