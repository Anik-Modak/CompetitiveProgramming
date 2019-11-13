//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

string str;
int dp[105][11], n;

int solve(int i, int r)
{
    if(i==n)
        return (0==r);

    if(dp[i][r] != -1)
        return dp[i][r];

    int ck = 0;
    if(str[i]=='*')
    {
        for(int j=0; j<=9; j++)
        {
            if(i==0 && j==0)
                continue;

            int tmp = (r*10 + j) % 6;
            ck = solve(i+1, tmp);
            if(ck)
            {
                str[i] = j+'0';
                break;
            }
        }
    }
    else
    {
        int tmp = (r*10 + str[i]-'0') % 6;
        ck = solve(i+1, tmp);
    }
    return dp[i][r] = ck;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        cin>>str;
        n = str.size();

        memset(dp, -1, sizeof(dp));
        int ans = solve(0, 0);

        if(ans)
            cout<<str<<"\n";
        else
            cout<<"-1\n";
        str.clear();
    }
    return 0;
}
