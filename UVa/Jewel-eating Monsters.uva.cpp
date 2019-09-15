#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x, a, n, c;

    while(cin>>x>>a>>n>>c)
    {
        ll ans = x - 1;
        while(n--)
        {
            ans = (ans * a) % c;
        }
        cout<<ans<<"\n";
    }
}
