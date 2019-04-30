#include<stdio.h>
int main()
{
    long long i,a[100000],n,max=0,min,c=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(i==0)
            min=a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<max&&a[i]>min)
            c=c+1;
    }
    printf("%lld\n",c);
    return 0;
}
