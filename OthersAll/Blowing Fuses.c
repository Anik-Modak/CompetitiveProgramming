#include<stdio.h>
int main()
{
    int m,n,c,i,j,k,x[100],a[100],y,s,max;
    k=1;
    while(1)
    {
        scanf("%d%d%d",&n,&m,&c);
        if(n==0&&m==0&&c==0)
            break;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x[i]);
            a[i]=0;
        }
        s=0;
        max=0;
        for(j=1;j<=m;j++)
        {
            scanf("%d",&y);
            if(a[y]==0){
                s=s+x[y];
                a[y]=1;
            }
            else{
                s=s-x[y];
                a[y]=0;
            }
            if(s>max)
                max=s;
        }
        printf("Sequence %d\n",k);
        if(c<max)
            printf("Fuse was blown.\n");
        else{
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",max);
        }
        k++;
        printf("\n");
    }
    return 0;
}
