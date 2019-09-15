//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll tmp[32];

long long power(ll a, ll n)
{
    if(n==0) return 1;
    long long ret=power(a*a,n/2);
    if(n%2==1) ret=ret*a;
    return ret;
}

void solve()
{
    tmp[0] = 0, tmp[2] = 1;
    for(int i=3; i<=31; i++)
        tmp[i] = 2 * tmp[i-1] + power(2, i-3);

    for(int i=3; i<=31; i++)
        tmp[i] += tmp[i-1];
}

int main()
{
    int t;
    cin>>t;
    solve();

    while(t--)
    {
        ll n, ans = 0;
        cin>>n;

        int m = log2(n), diff;
        ans = tmp[m];

        diff = n - power(2, m);
        while(diff > 0)
        {
            m = log2(diff);
            ans += tmp[m];
            diff = diff - power(2, m);
        }
        cout<< ans <<"\n";
    }
    return 0;
}
