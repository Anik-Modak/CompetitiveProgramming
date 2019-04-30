#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        int n,m,ans=0;
        cin>>n>>m;

        for(int i=m; i<=n; i++) ans+=(i+1-m);

        if(n==m) printf("Case %d: 1\n",ca);
        else printf("Case %d: %d\n",ca,ans);
    }
}


