#include<stdio.h>
int main()
{
    long long i,j,m,n,k,c;
    scanf("%lld%lld",&n,&k);
    if(n%2==0)
        m=n/2;
    else
       m=n/3;
    j=0;
    i=1;
    while(i<=m)
    {
        if(n%i==0)
        {
            c=i;
            j++;
        }
        if(k==j){
            printf("%lld\n",c);
                break;
        }
        i++;
    }
    if(k==j+1)
        printf("%lld\n",n);
    else if(k>j+1)
        printf("-1\n");
    return 0;
}
