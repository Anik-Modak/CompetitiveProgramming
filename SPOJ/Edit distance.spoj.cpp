//Anik_ModaK
#include<bits/stdc++.h>
using namespace std;

int dp[3003][3003];
int solve(string a, string b)
{
    int len1 = a.size(), len2 = b.size();
    for(int i=0; i < len1; i++)
    {
        dp[0][i] = i;
    }

    for(int i=0; i < len2; i++)
    {
        dp[i][0] = i;
    }

    for(int i=1; i <=len1; i++)
    {
        for(int j=1; j <= len2; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i][j-1], min(dp[i-1][j-1], dp[i-1][j]));
            }
        }
    }
    return dp[len1][len2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        string a, b;
        cin>>a>>b;

        int ans = solve(a,b);
        cout<<ans<<"\n";
    }
    return 0;
}
