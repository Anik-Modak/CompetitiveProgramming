#include <stdio.h>

int main()
{
    int n,i,t,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a,m,sum1=0,sum2=0,d;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);

            m=a/30+1;
            sum1+=m*10;
            m=a/60+1;
            sum2+=m*15;
        }
        if(sum1<sum2)
        {
                printf("Case %d: Mile %d\n",i,sum1);
        }
        else if(sum2<sum1)
        {
                printf("Case %d: Juice %d\n",i,sum2);
        }
        else if(sum1==sum2)
        {
                printf("Case %d: Mile Juice %d\n",i,sum1);
        }

    }
    return 0;
}
