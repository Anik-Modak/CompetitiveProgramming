#include<stdio.h>
int main()
{
    int t,n,i,m[50],j,c,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&m[j]);
        }
        c=0;
        d=0;
        for(j=1;j<n;j++){
            if(m[j]<m[j+1])c++;
            else if(m[j]>m[j+1])d++;
        }
        printf("Case %d: %d %d\n",i,c,d);
    }
    return 0;
}
