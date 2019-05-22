//Anik_Modak
#include<bits/stdc++.h>
#define MX 25
#define pii pair<int,int>
using namespace std;

int a[MX], dp[MX];
int solve(int u, int n)
{
    if(dp[u] != -1)
        return dp[u];

    int mx = 0;
    for(int v=u+1; v<=n; v++)
    {
        if(a[v] > a[u])
            mx = max(mx, solve(v, n));
    }
    return dp[u] = 1 + mx;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>a[i];

    int ans = 0;
    memset(dp, -1, sizeof(dp));

    for(int i=1; i<=n; i++)
        ans = max(ans, solve(i, n));
    cout<<ans<<endl;
}
