#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MX 10005

ll dp[MX],coin[MX];

void calc(){
    ll i,j,k,tmp,x;
    x = 1;
    for(i=1;i<=21;i++){
        x = i*i*i;
        coin[i] = x;
    }
    dp[0] = 1;
    for(i=1;i<=21;i++){
        for(j=coin[i];j<MX;j++){
            if(dp[j-coin[i]]>0){
                dp[j] += dp[j-coin[i]];
            }
        }
    }
}

int main(){
    ll i,j,k,l,m,n,cn=0,ts,cas=0,x;
    calc();
    freopen("11137.txt","r",stdin);
    while(1==scanf("%lld",&n)){
        printf("%lld\n",dp[n]);
    }
}
