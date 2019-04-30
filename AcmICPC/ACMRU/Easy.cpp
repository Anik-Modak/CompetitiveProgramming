#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int k,n,m;
        cin>>k>>n>>m;
        int j,a,u,v,ans;

        for(j=0;j<k;j++) cin>>a;

        for(j=0;j<m;j++) cin>>u>>v;

        if(k<n) ans=k;
        else ans=n;
        printf("Case %d: %d\n",i,ans);
    }
}
