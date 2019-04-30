#include<bits/stdc++.h>
#define ll long long
#define MD 100000007
using namespace std;
ll n,k,ara[105],dp[10005];

ll ways()
{
    ll i,j;
    memset(dp,0,sizeof dp);
    dp[0] = 1;
    for(j=1;j<=n;j++){
        for(i=1;i<=k;i++){
            if(i>=ara[j]){
                dp[i] = (dp[i] + dp[i-ara[j]])%MD;
            }
        }
    }
    return dp[k];
}


int main()
{
    ll i,j,ts,cas=0;
    freopen("1232.txt","r",stdin);
    cin>>ts;
    while(++cas<=ts){
        scanf("%lld %lld",&n,&k);
        for(i=1;i<=n;i++){
            scanf("%lld",&ara[i]);
        }
        printf("Case %lld: %lld\n",cas,ways());
    }
    return 0;
}
