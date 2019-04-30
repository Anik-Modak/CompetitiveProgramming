#include<stdio.h>
int main()
{
    int t,n,q[50],p,i,j,k,c,t1,t2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        int r[n],b[n];
        for(j=1;j<=n;j++){
           scanf("%d",&r[j]);
        }
        for(j=1;j<=n;j++){
           scanf("%d",&b[j]);
        }
        for(j=1;j<=n;j++){
            for(k=j;k<=n;k++){
                if(r[j]<r[k]){
                    t1=r[k];
                    r[k]=r[j];
                    r[j]=t1;
                }
                if(b[j]<b[k]){
                   t2=b[k];
                   b[k]=b[j];
                   b[j]=t2;
                }
            }
        }
        scanf("%d",&p);
        for(j=1;j<=p;j++){
            scanf("%d",&q[j]);
            c=0;
            for(k=1;k<=n;k++){
                if(r[k]*b[k]>=q[j])
                    c++;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
