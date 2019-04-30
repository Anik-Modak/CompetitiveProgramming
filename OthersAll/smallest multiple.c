#include<stdio.h>
int main()
{
    long long i,n,j,c;
    scanf("%lld",&n);
    j=20;
    while(1){
        c=0;
        for(i=1;i<=n;i++){
            if(j%i==0)
                c++;
        }
        if(c==n)break;
        j++;
    }
    printf("%lld\n",j);
    return 0;
}
