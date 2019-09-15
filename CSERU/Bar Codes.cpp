//Anik_Modak
#include <bits/stdc++.h>
#define ll long long
#define MX 51
using namespace std;

ll dp[MX][MX][MX];
ll solve(int n, int k, int m)
{
    if(n==0 && k==0)
        return 1;

    if(dp[n][k][m] != -1)
        return dp[n][k][m];

    int cnt = 0;
    for(int i=1; i<=m; i++)
    {
        if(n >= i && k >= 1)
            cnt += solve(n-i, k-1, m);
    }
    return dp[n][k][m] = cnt;
}

int main()
{
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, m, k;
        scanf("%d %d %d",&n,&k,&m);

        memset(dp, -1, sizeof(dp));
        ll ans = solve(n, k, m);
        printf("Case %d: %lld",++cas, ans);
    }
    return 0;
}
