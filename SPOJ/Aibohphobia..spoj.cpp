//Anik_Modak
#include<bits/stdc++.h>
#define MX 6101
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

int dp[MX][MX];
int solve(string &s, int i, int j)
{
    if(i >= j)
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    if(s[i] != s[j])
    {
        int n = INT_MAX;
        n = min(n, 1 + solve(s, i, j-1));
        n = min(n, 1 + solve(s, i+1, j));
        return dp[i][j] = n;
    }
    else
    {
        return dp[i][j] = solve(s, i+1, j-1);
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int t, ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        string s;
        cin>>s;

        mem(dp, -1);
        int ans = solve(s, 0, s.size()-1);
        cout<<ans<<"\n";
    }
    return 0;
}





