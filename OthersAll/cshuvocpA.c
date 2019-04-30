#include<stdio.h>
int main()
{
    long long  t,s1,s2,i,j,t1,n[10000];;
    while(1){
    scanf("%lld",&t);
    if(t==0) break;
    for(i=1;i<=t;i++){
        scanf("%lld",&n[i]);
    }
    for(i=1;i<=t;i++)
    {
        for(j=i;j<=t;j++)
        {
            if(n[i]>n[j])
           {
                t1=n[j];
                n[j]=n[i];
                n[i]=t1;
           }
        }
    }
    s1=0; s2=0;
    for(i=1;i<=t;i++){
        if(i>2)
            s2=s2+s1;
        s1=s1+n[i];
    }
    printf("%lld\n",s1+s2);
    }
    return 0;
}

