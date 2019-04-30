#include<bits/stdc++.h>
using namespace std;

int f[10000005],g[10000005];
int main()
{
    int t,ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        int a1,b1,c1;
        cin>>a1>>b1>>c1;

        int a2,b2,c2;
        cin>>a2>>b2>>c2;

        cin>>f[0]>>f[1]>>f[2];
        cin>>g[0]>>g[1]>>g[2];

        int mod,q,n;
        cin>>mod>>q;

        for(int i=3; i<=10000000; i++)
        {
            f[i]=((a1*f[i-1])%mod + (b1*f[i-2])%mod + (c1*g[i-3]%mod))%mod;
            g[i]=((a2*g[i-1])%mod + (b2*g[i-2])%mod + (c2*f[i-3]%mod))%mod;
        }
        printf("Case %d:\n",ca);

        while(q--){
            cin>>n;
            cout<<f[n]<<" "<<g[n]<<endl;
        }
    }
}
