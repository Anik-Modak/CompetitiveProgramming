#include <bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define chk(n,i) (bool)(n&(1<<i))
#define on(n,i) (n|(1<<i))
#define off(n,i) n=n&(~(1<<i))
#define eps 10e-7
#define MX 20005
using namespace std;

int n,k,dp[MX],ara[105],cnt[MX];

int din(){
    int i,j,mn=MX;
    memset(dp,-1,sizeof dp);
    dp[0] = 0;
    for(i=1;i<=n;i++){
        for(j=MX;j>=1;j--){
            if(j>=ara[i]&&dp[j-ara[i]]!=-1){
            	if(dp[j]==-1) dp[j] = dp[j-ara[i]] + 1;
         		else dp[j] =  min(dp[j],dp[j-ara[i]]+1);
          		if(j>=k&&dp[j]!=-1) mn = min(mn,j);
           	}
          }
     }
    return mn;
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,x,y,sum=0;
    freopen("11517.txt","r",stdin);
    cin>>ts;
    while(++cas<=ts){
        scanf("%d%d",&k,&n);
        sum = 0;
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        x = din();
        printf("%d %d\n",x,dp[x]);
    }
    return 0;
}
