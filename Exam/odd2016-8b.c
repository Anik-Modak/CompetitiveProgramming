#include<stdio.h>
int PrimeNumber(int n)
{
    int i, p=1;
    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0){
            p=0;
            break;
        }
    }
    return p;
}
int main(){
    int t,i,j,p,k,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&sum);
        for(j=sum;j>1;j--)
        {
           p=PrimeNumber(j);
           if(p==1) break;
        }
        printf("%d\n",sum-j);
    }
    return 0;
}
