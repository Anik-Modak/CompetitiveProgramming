#include <stdio.h>

int main()
{
    long long s,sum,a,i;
    while(1)
    {
        scanf("%lld",&a);
        if(a==0)
            break;
        sum=0;
        for(i=1; i<=a; i++)
        {
            s=i*i;
            sum=sum+s;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
