#include<stdio.h>
int main()
{
    long long n,b,h,w,p,a,i,j,s,min;
    while(scanf("%lld%lld%lld%lld",&n,&b,&h,&w)!=EOF)
    {
        s=0;
        for(i=1;i<=h;i++)
        {
           scanf("%lld",&p);
           for(j=1;j<=w;j++)
           {
                scanf("%lld",&a);
                if(i==1&&j==1)min=n*p;
                if(n*p<=b&&a>=n&&min>=n*p){
                    min=n*p;
                    s=1;
                }
           }
        }
        if(s==1)
            printf("%lld\n",min);
        else
            printf("stay home\n");
    }
    return 0;
}

