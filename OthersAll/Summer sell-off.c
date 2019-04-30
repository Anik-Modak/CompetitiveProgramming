#include<stdio.h>
int main()
{
    long long i,n,f,p,s,t,c,max=-10;
    scanf("%lld%lld",&n,&f);

    long long k[n+1],l[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld",&k[i],&l[i]);
        if(i!=f){
            s=2*k[i];
            t=l[i];
            if(s<t) t=s;
            if(max<t){
                max=t;
                c=i;
            }
        }
    }
    p=0;
    for(i=1;i<=n;i++){
        if(c==i&&f!=0){
            k[i]=2*k[i];
        }
        else if(i==f)
            k[i]=2*k[i];
        if(k[i]<l[i]) l[i]=k[i];
            p=p+l[i];
    }
    printf("%lld\n",p);
    return 0;
}
