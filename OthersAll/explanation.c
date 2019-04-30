#include<stdio.h>
int main()
{
    int i,j,n,r[50],b[50],t,q,k,c,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&r[j]);
        }
        for(j=1;j<=n;j++){
            scanf("%d",&b[j]);
        }
        scanf("%d",&q);
        for(j=1;j<=q;j++){
            c=0;
            scanf("%d",&p);
            for(k=1;k<=n;k++){
                if(r[k]*b[k]>=p)
                    c++;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
