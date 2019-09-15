//Anik_Modak
#include<bits/stdc++.h>
#define MX 20
using namespace std;

int dp[MX][MX], mat[MX][MX];
int call(int i, int j, int n)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        int ret = 0;
        ret = max(ret, call(i + 1, j, n) + mat[i][j]);
        ret = max(ret, call(i + 1, j - 1, n) + mat[i][j]);
        ret = max(ret, call(i + 1, j + 1, n) + mat[i][j]);
        return dp[i][j] = ret;
    }
    else
        return 0;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                scanf("%d",&mat[i][j]);

        memset(dp, -1, sizeof(dp));
        int ans = call(0, 0, n);
        printf("Case %d: %d\n",++cas, ans);
    }
    return 0;
}
