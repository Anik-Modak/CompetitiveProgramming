#include<stdio.h>
int main()
{
    int i,j,k,l,n,m,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        for(l=1;l<=m;l++)
        {
            for(j=1;j<=n;j++)
            {
                for(k=1;k<=j;k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(j=n-1;j>0;j--)
            {
                for(k=j;k>0;k--)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            if(l==m&&t==i)
                    break;
            else
                printf("\n");
        }
    }
    return 0;
}

