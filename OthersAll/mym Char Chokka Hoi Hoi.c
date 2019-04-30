#include<stdio.h>
int power(long long a,long long n)
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
    int i,n,m,b,t,k,x,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&n,&m,&b);
        x=(n+1)-m;
        for(k=0;k<power(7,b);k++){
            if(k>=x) break;
        }
        c=power(7,b)-k;
        printf("%d\n",c);
    }
    return 0;
}
