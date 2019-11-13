//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int coin[22];
ll dp[22][10005];

ll call(int i, int sum)
{
    if(i >= 21)
    {
        if(sum==0)
            return 1;
        else
            return 0;
    }

    if(dp[i][sum] != -1)
        return dp[i][sum];

    ll ret1 = 0, ret2 = 0;
    if(sum-coin[i] >= 0)
        ret1 = call(i, sum-coin[i]);
    ret2 = call(i+1, sum);

    return dp[i][sum] = ret1 + ret2;

}

void coin_fn()
{
    for(int i=0; i<21; i++)
    {
        int m = i+1;
        coin[i] = m*m*m;
        //cout<<coin[i]<<endl;
    }
}

int main()
{
    coin_fn();
    ios::sync_with_stdio(false);
    memset(dp,-1,sizeof(dp));

    int n;
    while(cin>>n)
    {
        cout<<call(0, n)<<"\n";
    }
    return 0;
}
