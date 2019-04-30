#include<stdio.h>
int main()
{
    int t,i,j,n,q;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&n,&q);
        int k[q],m[n];
        for(j=1;j<=n;j++){
            scanf("%d",&m[j]);
        }
        for(j=1;j<=q;j++){
            scanf("%d",&k[j]);
        }
    }
}
