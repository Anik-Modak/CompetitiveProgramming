#include<bits/stdc++.h>
#define ll long long
#define fr(txt) freopen("Txt","r",stdin)
#define md 100000007
using namespace std;

int v[55],vt[55],dp[55][1005],n,k;

ll coin(ll i,ll cs){
   // cout<<i<<" "<<cs<<" "<<" "<<v[i]<<endl;
    ll pr1=0,j;

    if(i>=n){
        if(cs == 0){
            //cout<<"retuening 1\n";
            return 1;
        }
        else return 0;
    }

    if(dp[i][cs] != -1){
        //cout<<i<<" "<<cs<<" "<<c<<" dp: "<<dp[i][cs][c]<<endl;
        return dp[i][cs];
    }
    for(j=0;j<=vt[i]&&(cs-v[i]*j)>=0;j++){
        pr1 += coin(i+1,cs-v[i]*j);
    }

    return dp[i][cs] = pr1 % md;
}

int main(){

    ll cas=0,t,i,j,k;
    //freopen("1231.txt","r",stdin);
    cin>>t;
    while(++cas<=t){

        memset(dp,-1,sizeof(dp));

        scanf("%lld %lld",&n,&k);

        for(i=0;i<n;i++) scanf("%lld",&v[i]);
        for(i=0;i<n;i++) scanf("%lld",&vt[i]);

        printf("Case %lld: %lld\n",cas,coin(0,k));
    }
    return 0;
}
