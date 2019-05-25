//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define ll long long
using namespace std;

unordered_map<ll,ll> dp;
ll fn(ll n)
{
    if(n==0)
        return dp[n] = 0;
    if(n==1 || n==2)
        return dp[n] = n;
    if(dp[n])
        return dp[n];
    return dp[n] = max(n, fn(n/2)+fn(n/3)+fn(n/4));
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll n, ans;

    while(cin>>n)
    {
        ans = fn(n);
        cout<<ans<<"\n";
    }
    return 0;
}
