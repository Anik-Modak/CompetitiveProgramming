//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define MX 105
using namespace std;

int a[MX], dp[MX][MX];
int sum(int s, int e)
{
    int ans = 0;
    for(int i=s; i<=e; i++)
        ans = (ans + a[i]) % 100;

    return ans;
}

int solve(int i, int j)
{
    if(i >= j)
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    dp[i][j] = INT_MAX;
    for(int k=i; k<=j; k++)
    {
        dp[i][j] = min(dp[i][j], solve(i, k) + solve(k+1, j) + sum(i, k) * sum(k+1, j));
    }
    return dp[i][j];
}

int main()
{
    int  n;
    ios_base::sync_with_stdio(false);
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
            cin>>a[i];

        memset(dp, -1, sizeof(dp));
        cout<<solve(0, n-1)<<"\n";
    }
    return 0;
}

