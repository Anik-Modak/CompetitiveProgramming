#include<bits/stdc++.h>
#define MX 100010
using namespace std;

int n,m,dp[MX],ara[105],coin[105],num[MX];

int solve(){
    int i,j,cn=0,v;
    memset(dp,0,sizeof dp);
    dp[0] = 1;
    for(j=1;j<=n;j++){
        memset(num,0,sizeof num);
        for(i=ara[j];i<=m;i++){
            v = i-ara[j];
            if(!dp[i]&&dp[v]&&num[v]<coin[j]){
                cn++;
                dp[i] = 1;
                num[i] = num[v] + 1;
            }
        }
    }
    return cn;
}

int main(){
    int i,j,ts,cas=0;
    freopen("1233 - Coin Change (III).txt","r",stdin);
    cin>>ts;
    while(++cas<=ts){
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=n;i++){
            scanf("%d",&coin[i]);
        }
        printf("Case %d: %d\n",cas,solve());
    }
    return 0;
}
