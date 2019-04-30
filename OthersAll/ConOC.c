#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,n,k,t,p,s,c,a[100000];
    scanf("%lld%lld",&n,&k);
    s=sqrt(n);
    for(i=1,j=1;i<=s;i++)
    {
        if(n%i==0){
            a[j++]=i;
            p=n/i;
            if(i==p)
                break;
            else
                 a[j++]=p;
        }
    }
     c=j-1;
    for(i=1;i<=c;i++)
    {
        for(j=i;j<=c;j++)
        {
            if(a[i]>a[j])
            {   t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    if(k>c)
        printf("-1\n");
    else
        printf("%lld\n",a[k]);

    return 0;
}
