#include<stdio.h>
int main()
{
    int a[50],t,n,i,j,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&a[j]);
        }
        x=(n/2)+1;
        printf("Case %d: %d\n",i,a[x]);
    }
    return 0;
}
