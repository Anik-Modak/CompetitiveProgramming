#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,t,k,x,n[500],min,p,s;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&x);
        for(j=0;j<x;j++)
        {
            scanf("%lld",&n[j]);
        }
        min=10000000000;
        for(j=0;j<x;j++)
        {
            s=0;
            for(k=0;k<x;k++)
            {
                p=n[j]-n[k];
                s=s+abs(p);
            }
            if(s<min)
                min=s;
        }
       printf("%lld\n",min);
    }
    return 0;
}
