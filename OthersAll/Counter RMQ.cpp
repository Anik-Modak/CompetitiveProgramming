#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    for(c=1;c<=t;c++)
    {
        int n,q,i;
        scanf("%d%d",&n,&q);
        int j,p,l,h,m,a[n+1]={0},mx=0;
        for(i=1;i<=q;i++)
        {
            scanf("%d%d%d",&l,&h,&m);
            if(mx<=m) mx=m;
            for(j=l;j<=h;j++){
                if(a[j]<m) a[j]=m;
                else if(a[j]==m) break;
            }
        }
        printf("Case %d:",c);
        for(i=1;i<=n;i++)
        {
            if(a[i]==0) a[i]=mx+5;
            printf(" %d",a[i]);
        }
    }
}
