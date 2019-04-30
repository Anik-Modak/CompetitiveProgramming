#include<stdio.h>
int main()
{
    int i,j,a[1000],n,m;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        a[i]=0;
    }
    a[1]=1;
    for(i=1;i<=n;i++)
    {
        if(a[i]==0){
            for(j=i+i;j<=n;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    for(i=m;i<=n;i++)
    {
        if(a[i]==0)
            printf("%d ",i);
    }
    return 0;
}
