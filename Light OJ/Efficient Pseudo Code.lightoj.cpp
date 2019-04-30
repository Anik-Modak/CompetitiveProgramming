//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int,int>
#define Mod 1000000007
#define MX 100005
#define ll long long
using namespace std;

map<int,int>mp;
void primeFactors(ll n)
{
    while (n%2 == 0)
    {
        mp[2]++;
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }

    if (n > 2)
        mp[n]++;
}

long long bigmod ( long long a, long long p, long long m )
{
    long long res = 1;
    long long x = a;

    while ( p )
    {
        if ( p & 1 )
        {
            res = ( res * x ) % m;
        }
        x = ( x * x ) % m;
        p = p >> 1;
    }
    return res;
}

ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        ll q = a / m;
        ll t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }

    if (x < 0)
       x += m0;

    return x;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        ll n, m, ans = 1;
        scanf("%lld%lld",&n,&m);

        primeFactors(n);
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            ll x = bigmod(it->first, it->second*m+1, Mod) - 1;
            ll y = modInverse(it->first-1, Mod);

            ll tmp = (x*y) % Mod;
            ans = (ans*tmp) % Mod;
        }

        if(n==Mod)
            printf("Case %d: 1\n",++cas,ans);
        else
            printf("Case %d: %lld\n",++cas,ans);
        mp.clear();
    }

    return 0;
}
